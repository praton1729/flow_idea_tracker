#ifndef __FLOW_SHELL_HANDLERS__
#define __FLOW_SHELL_HANDLERS__

#define CMD_NR 3

typedef struct cmd_struct
{
	char* cmd_name;
	int (*cmd_handler)(void);
} cmd_struct;

#endif
