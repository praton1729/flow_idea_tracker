/*
 * =====================================================================================
 *
 *       Filename:  util.h
 *
 *    Description:  Interface to the helper functions
 *
 *        Version:  1.0
 *        Created:  Wednesday 17 March 2021 10:09:03  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  PRATHU BARONIA (praton), prathu.baronia@oneplus.com
 *   Organization:  OnePlus RnD
 *
 * =====================================================================================
 */

/* Usage printing related helpers  */
void print_welcome_message (void);

/* Filesystem related helpers */
int check_existence_of_dir (char* dir_name);

/* Parsing related helpers */
void parse_the_cmdline_options (int number_of_args, char* args_array[]);

/* Interface related helpers */
void idea_listing_interface(void);
