/*
 * =====================================================================================
 *    Description:  Interface to the helper functions
 * =====================================================================================
 */

/* Logging related macros */
#define ERROR_MSG(...) printf("ERROR: "__VA_ARGS__)
#define WARN_MSG(...) printf("WARN: "__VA_ARGS__)
#define INFO_MSG(...) printf("INFO: "__VA_ARGS__)

/* Initial setup helpers */
void flow_initial_setup(void);
void print_welcome_message (void);

/* Filesystem related helpers */
void check_and_create_dir (char* dir_name);
int check_existence_of_dir (char* dir_name);
int dir_not_empty(char* dir_name);
int list_files_in_dir(char* dir_name);
