#ifndef _ACT_SKILLS_H
#define _ACT_SKILLS_H

struct hunting_data {
  char	*name;
  struct char_data **victim;
};

void do_disarm(struct char_data *ch, char *argument, int cmd);
int named_mobile_in_room(int room, struct hunting_data *c_data);
void do_peer(struct char_data *ch, char *argument, int cmd);
void do_track(struct char_data *ch, char *argument, int cmd);
int track( struct char_data *ch, struct char_data *vict);
int dir_track( struct char_data *ch, struct char_data *vict);
int RideCheck( struct char_data *ch);
void FallOffMount(struct char_data *ch, struct char_data *h);
int Dismount(struct char_data *ch, struct char_data *h, int pos);
int MountEgoCheck(struct char_data *rider,struct char_data *mount);
void do_mount(struct char_data *ch, char *arg, int cmd);

#endif
