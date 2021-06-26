/* 
 * =====================================================================================
 *    Description:  Contains all the shell ops.
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <readline/readline.h> 
#include <readline/history.h> 
#include "handlers.h"

extern cmd_struct flow_cmd_list[];

char* flow_prompt="(flow) ";

int exec_cmd(char* cmd)
{	
	for(int i=0; i < CMD_NR; i++)
	{
		if(strcmp(cmd, flow_cmd_list[i].cmd_name) == 0){
			return flow_cmd_list[i].cmd_handler();
		}
		
	}
	printf("Error: %s command not found\n", cmd);
	return -1;
}

char* get_cmd(void)
{
	char* input = readline(flow_prompt);
	add_history(input);

	return input;
}

void __flow_shell(void)
{
	char* line;
	int status;

	do{
		line = get_cmd();
		status = exec_cmd(line);
	} while(status);
}

void flow_shell(void)
{
	while(1){
		__flow_shell();
	}
}
