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

/* Logging related macros */
#define ERROR_MSG(...) printf("ERROR: "__VA_ARGS__)
#define WARN_MSG(...) printf("WARN: "__VA_ARGS__)
#define INFO_MSG(...) printf("INFO: "__VA_ARGS__)

/* Usage printing related helpers  */
void print_welcome_message (void);

/* Filesystem related helpers */
int check_existence_of_dir (char* dir_name);
int dir_not_empty(char* dir_name);
