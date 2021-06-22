/*
 * =====================================================================================
 *
 *       Filename:  parsers.h
 *
 *    Description:  Contains all the parser related logic.
 *
 *        Version:  1.0
 *        Created:  Thursday 18 March 2021 12:51:53  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  PRATHU BARONIA (praton), prathu.baronia@oneplus.com
 *   Organization:  OnePlus RnD
 *
 * =====================================================================================
 */

void parse_the_cmdline_options (int number_of_args, char* args_array[]);

IDEA_LIST* get_idea_list(char* dir_name);