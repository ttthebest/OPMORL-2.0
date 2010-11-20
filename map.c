/*
 *  map.c
 *  OPMORL 2
 *
 *  Created by Théotime Grohens on 20/11/10.
 *  Copyright 2010 OPMORL 2 dev team. All rights reserved.
 *
 */

#include "opmorl.h"

void create_map() {
	int i, j;
	for (i = 0; i < 21; i++) {
		for (j = 0; j < 80; j++) {
			if (i == 0 || j == 0 || i == 20 || j == 79){
				map[i][j] = T_WALL;
			} /* Around */
			else
				map[i][j] = T_GROUND;
		}
	}
}