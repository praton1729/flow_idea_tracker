/* =====================================================================================
 *    Description:  The main file for the flow binary
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include "core.h"
#include "util.h"
#include "parsers.h"

#define FLOW_CONFIG_DIR ".flow"

int main(int argc, char** argv)
{
	print_welcome_message();

	check_existence_of_dir(FLOW_CONFIG_DIR);

	parse_the_cmdline_options(argc, argv);

	/* Implement the flow prompt and print out info based on commands */
	
	//start_flow_shell();

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
