/* =====================================================================================
 *    Description:  Contains all the core/top level functions.
 * =====================================================================================
 */

#include<stdio.h>
#include<readline/readline.h> 
#include<readline/history.h> 
#include "core.h"
#include "draw.h"
#include "util.h"

void list_all_ideas(void)
{
	IDEA_LIST* idea_list = get_idea_list("ideas");
	flush_screen();
	draw_idea_list_box(idea_list);
}

void idea_listing_interface(void)
{
	if (!check_existence_of_dir("ideas")) {
		if (dir_not_empty("ideas")) {
			list_all_ideas();
		}
		else {
			INFO_MSG("No ideas exist right now\n");
		}
	}
}

IDEA_LIST* get_idea_list(char* dir_name)
{
	/* TODO */
}
