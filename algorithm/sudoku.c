/* 2022.2.23

#include <stdio.h>
#include <stdbool.h>

bool line[9][1];
bool column[1][9];
bool dfs[9][9];
bool block[3][3][9];
int* space[81];
int spacesize;

void lico(char** cube, int dot) {
	int i, j;


	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (line[i][1-1] != 0 && line[i++][1-1] = '.')
				return true;
			else
			{
				return false;
			}
			if (column[1-1][j] != 0 && column[1-1][j++] = '.')
				return true;
			else {
				return false;
			}
		}
	}
	return cube[i][j];
}
*/

