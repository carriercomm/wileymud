#ifndef _ACT_COMM_H
#define _ACT_COMM_H

#define MAX_NOTE_LENGTH 2048      /* arbitrary */

void do_say(struct char_data *ch, char *argument, int cmd);
void do_shout(struct char_data *ch, char *argument, int cmd);
void do_commune(struct char_data *ch, char *argument, int cmd);
void do_tell(struct char_data *ch, char *argument, int cmd);
void do_whisper(struct char_data *ch, char *argument, int cmd);
void do_ask(struct char_data *ch, char *argument, int cmd);
void do_write(struct char_data *ch, char *argument, int cmd);

void do_group_tell(struct char_data *ch,char *arguement,int cmd);
void do_group_report(struct char_data *ch,char *arguement,int cmd);
void do_split(struct char_data *ch,char *arguement,int cmd);

void do_land(struct char_data *ch,char *arg,int cmd);
void do_invis_off(struct char_data *ch,char *arg,int cmd);

#endif
