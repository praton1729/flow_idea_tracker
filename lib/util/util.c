/* =====================================================================================
 *    Description:  Helper functions
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <string.h>
#include "config.h"
#include "util.h"

void print_welcome_message (void)
{
     printf(
	"!! Welcome to flow the idea tracker !!\n"
	"Use it to create and track progress on anything.\n"
     	"Typical usecases:\n"
     	"\t1. Use it to track research ideas\n"
     	"\t2. Use it to track development of projects\n"
     	"\t3. Use it to track progress of life goals\n"
     	"\t4. Use it to track progress of daily todos\n"
     	"Cheers!!\n"
     	"Author: Prathu Baronia\n\n");
}

int check_existence_of_dir(char *dir_name)
{
	struct stat st = {0};

	if (stat(dir_name, &st) != -1) {
		printf("INFO: %s dir exists in the current dir\n", dir_name);
	} else {
		printf("%s: %s\n", dir_name, strerror(errno));
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}

void ask_for_dir_creation(char* dir_name)
{
	int choice;
	int status;

	printf("Do you want to create the %s dir?[y/n]", dir_name);
	if((choice = getchar()) == 'y'){
		if((status = mkdir(dir_name, 0700)) == -1)
			printf("Error: mkdir failed for some reason.\n");
	}
	return;
}

void check_and_create_dir(char *dir_name)
{
	int status;

	if((status = check_existence_of_dir(dir_name)) == EXIT_FAILURE)
		ask_for_dir_creation(dir_name);

	return;
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

int list_files_in_dir(char *dir_name)
{
	struct dirent* dir_ent;
	DIR* dir_ptr = opendir(dir_name);
	int count = 1;

	if(!dir_not_empty(dir_name))
	{	
		ERROR_MSG("%s dir is empty\n", dir_name);
		return -1;
	}

	while ((dir_ent = readdir(dir_ptr)) != NULL)
	{
		if((strcmp(dir_ent->d_name,".") == 0) || (strcmp(dir_ent->d_name,"..") == 0))
		{
			continue;
		} else {
			printf("%d: %s\n", count, dir_ent->d_name);
			count++;
		}
	}
	closedir(dir_ptr);
}

void flow_initial_setup(void)
{
	print_welcome_message();
	check_and_create_dir(FLOW_CONFIG_DIR);	
}

