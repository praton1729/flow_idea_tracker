/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  The main file for the flow binary
 *
 *        Version:  1.0
 *        Created:  Wednesday 17 March 2021 09:25:10  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  PRATHU BARONIA (praton), prathu.baronia@oneplus.com
 *   Organization:  OnePlus RnD
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include "include/util.h"

#define FLOW_CONFIG_DIR ".flow"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  Prints the welcome message, parses the cmdline options and
 *  passes the control to the idea listing segment,
 * =====================================================================================
 */

int main ( int argc, char *argv[] )
{
	print_welcome_message();

	check_existence_of_dir(FLOW_CONFIG_DIR);

	parse_the_cmdline_options(argc, argv);

	idea_listing_interface();

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
