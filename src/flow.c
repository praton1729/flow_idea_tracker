/* =====================================================================================
 *    Description:  The main file for the flow binary
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include "config.h"
#include "util.h"
#include "shell.h"

int main(int argc, char** argv)
{
	flow_initial_setup();

	/* Implement the flow prompt and print out info based on commands */
	
	flow_shell();

	return EXIT_SUCCESS;
}
