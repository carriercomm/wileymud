#ifndef _BUG_H
#define _BUG_H

#define DIKU_CRUD
#ifndef DIKU_CRUD
#define GREATER_GOD 0
#endif

#define bug(Str, ...) \
        abug(__FILE__, __PRETTY_FUNCTION__, __LINE__, \
	     GREATER_GOD, 0, NULL, NULL, Str, ## __VA_ARGS__ )
#define dlog(Str, ...) \
	abug(NULL, NULL, 0, GREATER_GOD, 0, NULL, NULL, Str, ## __VA_ARGS__ )

void                                    abug(char *File, char *Func, int Line,
					     unsigned int Level, unsigned int Type,
					     char *BugFile, struct char_data *ch, char *Str,
					     ...);

#endif
