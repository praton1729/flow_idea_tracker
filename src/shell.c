/* 
 * =====================================================================================
 *    Description:  Contains all the shell ops.
 * =====================================================================================
 */

#include<stdio.h>
#include<readline/readline.h> 
#include<readline/history.h> 
#include "core.h"
#include "draw.h"
#include "parsers.h"
#include "util.h"

char* flow_prompt="(flow) ";

int get_cmd_status(char* line)
{
	return 1;
}

char* get_cmd(void)
{
	char* input = readline(flow_prompt);
	add_history(input);

	return input;
}

void flow_shell(void)
{
	char* line;
	int status;

	do{
		line = get_cmd();
		status = get_cmd_status(line);
	} while(status);
}
