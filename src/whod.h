#ifndef _WHOD_H
#define _WHOD_H

#define MUDNAME "DeadMUD"
#define START_TIME "Dead start time was: %s\n\r"
#define GAME_TIME "Quixadhal's time is: %s\n\r"

/*
 * *** The following statement indicates the WHOD default mode 
 * Modes can be:
 * SHOW_NAME
 * SHOW_LEVEL
 * SHOW_TITLE
 * SHOW_CLASS
 * SHOW_ON
 */

#define DEFAULT_MODE ( SHOW_NAME | SHOW_ON )

#define INVIS_LEVEL(ch) ((ch)->invis_level)

#define WIZ_MIN_LEVEL 50
#define WIZ_MAX_LEVEL 59

#define LOG(msg) log(msg)
#define WHOD_DELAY_TIME 3
#define DISPLAY_LINKDEAD 1

#define WHOD_OPENING 1
#define WHOD_OPEN    2
#define WHOD_DELAY   3
#define WHOD_END     4
#define WHOD_CLOSED  5
#define WHOD_CLOSING 6

#define SHOW_NAME	0x00000001
#define SHOW_TITLE	0x00000002
#define SHOW_SITE	0x00000004
#define SHOW_ON		0x00000008
#define SHOW_OFF	0x00000010

#define WRITE(d,msg) if((write((d),(msg),strlen(msg)))<0){\
                            perror("whod.c - write");}

#ifndef _WHOD_C
/* static long disconnect_time; */
/* static int s; */
/* static int whod_mode = DEFAULT_MODE; */
/* static int state; */
/* static int whod_port; */
#endif

void do_whod(struct char_data *ch, char *arg, int cmd);
void init_whod(int port);
void close_whod(void);
void whod_loop(void);

#endif
