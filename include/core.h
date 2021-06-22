/*
 * =====================================================================================
 *
 *       Filename:  core.h
 *
 *    Description:  Contains all the core/top level fnctions.
 *
 *        Version:  1.0
 *        Created:  Thursday 18 March 2021 12:47:09  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  PRATHU BARONIA (praton), prathu.baronia@oneplus.com
 *   Organization:  OnePlus RnD
 *
 * =====================================================================================
 */

/* Core structures */

struct IDEA_LIST {
};				/* ----------  end of struct IDEA_LIST  ---------- */

typedef struct IDEA_LIST IDEA_LIST;

/* Flow shell routines */
void start_flow_shell(void);

/* Idea listing interface functions */
void idea_listing_interface(void);
void list_all_ideas(void);

