#include <stdio.h>
#include <stdlib.h>
#include "handlers.h"
#include "util.h"

int help_handler(void);
int exit_handler(void);
int list_handler(void);

cmd_struct flow_cmd_list[] = {
	{"help", &help_handler},
	{"exit", &exit_handler},
	{"list", &list_handler}
};

int list_handler(void)
{
	return list_files_in_dir("ideas");
}

int help_handler(void)
{
	for(int i=0; i < CMD_NR; i++)
		printf("%s\t", flow_cmd_list[i].cmd_name);
	printf("\n");
	return 0;
}

int exit_handler(void)
{
	exit(EXIT_SUCCESS);
	return 0;
}
