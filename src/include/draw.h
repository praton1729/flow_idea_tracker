/*
 * =====================================================================================
 *
 *       Filename:  draw.h
 *
 *    Description:  Contains all the ncurses based drawing logic.
 *
 *        Version:  1.0
 *        Created:  Thursday 18 March 2021 12:49:01  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  PRATHU BARONIA (praton), prathu.baronia@oneplus.com
 *   Organization:  OnePlus RnD
 *
 * =====================================================================================
 */

/* This will draw a box and fill it with oneline summary of active ideas. */
void draw_idea_list_box(IDEA_LIST* idea_list);

void flush_screen(void);
