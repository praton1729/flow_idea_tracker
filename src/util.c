/* =====================================================================================
 *    Description:  Helper functions
 * =====================================================================================
 */
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/util.h"

void print_welcome_message (void)
{
     printf("!! Welcome to flow the idea tracker !!\n");
     printf("Use it to create and track progress on anything.\n");
     printf("Typical usecases:\n");
     printf("\t1. Use it to track research ideas\n");
     printf("\t2. Use it to track development of projects\n");
     printf("\t3. Use it to track progress of life goals\n");
     printf("\t4. Use it to track progress of daily todos\n");
     printf("Cheers!!\n");
     printf("Author: Prathu Baronia\n\n");
}

int check_existence_of_dir (char *dir_name)
{
	DIR* dir_ptr = opendir(dir_name);

	if (dir_ptr) {
		closedir(dir_ptr);
		INFO_MSG("%s dir exists in the current dir\n", dir_name);
		return EXIT_SUCCESS;
	}
	else if (ENOENT == errno) {
		ERROR_MSG("%s dir does not exists in the current dir, exiting...\n", dir_name);
		return EXIT_FAILURE;
	} else {
		ERROR_MSG("opendir failed for some other reason\n");
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}

int dir_not_empty(char* dir_name)
{
	int number_of_files = 0;
	struct dirent* dir_ent;
	DIR* dir_ptr = opendir(dir_name);

	while ((dir_ent = readdir(dir_ptr)) != NULL)
	{
		if(++number_of_files > 2)
			break;
	}
	closedir(dir_ptr);
	if (number_of_files > 2)
		return 1;
	else
		return 0;
}
