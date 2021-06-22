/*
 * =====================================================================================
 *
 *       Filename:  core.c
 *
 *    Description:  Contains all the core/top level functions.
 *
 *        Version:  1.0
 *        Created:  Thursday 18 March 2021 12:45:13  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  PRATHU BARONIA (praton), prathu.baronia@oneplus.com
 *   Organization:  OnePlus RnD
 *
 * =====================================================================================
 */

#include "include/core.h"
#include "include/draw.h"
#include "include/keypress.h"
#include "include/parsers.h"
#include "include/util.h"
#include <stdio.h>

void start_flow_shell(void)
{
	while(1){
		printf("flow> ");
	}
}

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
	wait_for_keypress();
}
