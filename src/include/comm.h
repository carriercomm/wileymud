/*
 * file: comm.h , Communication module.                   Part of DIKUMUD
 * Usage: Prototypes for the common functions in comm.c
 */
#ifndef _COMM_H
#define _COMM_H

#define RFC1413

#define send_to_char(m,c) cprintf((c),(m))
#define send_to_room(m,r) rprintf((r),(m))
#define send_to_all(m) aprintf(m)
#define send_to_outdoor(m) oprintf(m)
#define send_to_except(m,e) eprintf((e),(m))
#define send_to_room_except(m,r,e) reprintf((r),(e),(m))
#define send_to_room_except_two(m,r,e1,e2) re2printf((r),(e1),(e2),(m))

#define DFLT_PORT 3000

#define MAX_NAME_LENGTH 15
#define MAX_HOSTNAME   256
#define OPT_USEC 250000   /* time delay corresponding to 4 passes/sec */

#define STATE(d) ((d)->connected)
#define PROFILE(x)
#define SEND_TO_Q(messg, desc)  write_to_q((messg), &(desc)->output)

#define TO_ROOM    0
#define TO_VICT    1
#define TO_NOTVICT 2
#define TO_CHAR    3

#ifndef _COMM_C
extern struct descriptor_data *descriptor_list;
extern struct descriptor_data *next_to_process;
extern int slow_death;
extern int diku_shutdown;
extern int diku_reboot;
extern int DEBUG;
extern int DEBUG2;
extern int no_specials;
extern long Uptime;
extern int maxdesc;
extern int avail_descs;
extern int tics;
extern int pulse;
extern int pulse_update;
extern int pulse_river;
extern int pulse_teleport;
extern int pulse_nature;
extern int pulse_sound;
extern int pulse_zone;
extern int pulse_mobile;
extern int pulse_violence;
extern int pulse_reboot;
extern int pulse_dump;
extern int mud_port;

#endif

int main(int argc, char **argv);
void run_the_game(int port);
void game_loop(int s);
int get_from_q(struct txt_q *queue, char *dest);
void write_to_q(char *txt, struct txt_q *queue);
struct timeval timediff(struct timeval *a, struct timeval *b);
void flush_queues(struct descriptor_data *d);
int init_socket(int port);
int new_connection(int s);

int new_descriptor(int s);
int process_output(struct descriptor_data *t);
int write_to_descriptor(int desc, char *txt);
int process_input(struct descriptor_data *t);
void close_sockets(int s);
void close_socket(struct descriptor_data *d);
void nonblock(int s);

void dcprintf(struct descriptor_data *d, char *Str,...);
void cprintf(struct char_data *ch, char *Str,...);
void rprintf(int room, char *Str,...);
void zprintf(int zone, char *Str,...);
void aprintf(char *Str,...);
void oprintf(char *Str,...);
void eprintf(struct char_data *ch, char *Str,...);
void reprintf(int room, struct char_data *ch, char *Str,...);
void re2printf(int room, struct char_data *ch1, struct char_data *ch2, char *Str,...);
void iprintf(char *Str,...);
void save_all(void);
void act(char *str, int hide_invisible, struct char_data *ch, struct obj_data *obj, void *vict_obj, int type);
void dump_player_list(void);

#endif