#include <stdio.h>
#include <stdlib.h>
#include "handlers.h"

int help_handler(void);
int exit_handler(void);

cmd_struct flow_cmd_list[] = {
	{"help", &help_handler},
	{"exit", &exit_handler}
};

int help_handler(void)
{
	printf("Executing help cmd handler\n");
	return 0;
}

int exit_handler(void)
{
	printf("Executing exit cmd handler\n");	
	exit(EXIT_SUCCESS);
	return 0;
}
