/* 2022.2.23

#include <stdio.h>
#include <stdbool.h>

bool line[9][9];
bool column[9][9];
bool block[3][3][9];
int* space[81];
int spacesize;


void lico(char** cube, int dot) {
	int i, j;
	int row;
	int col;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (row=0 && cube[i][row] !=0)
				cube[i+1][row]=='.';
				cube[i-1][row]=='.';

			if (col=0 && cube[col][j] != 0 )
				cube[col][j+1]=='.';
				cube[col][j-1]=='.';
		}
	}
	printf("%d", cube[i][j]);
	return 0;
}

void solvesudoku(char** cube, int boardsize, int* boardcolsize) {
	int a, b, c;
	for (a = 0; a < 3; a++) {
		for (b = 0; b < 3; b++) {
			for (c = 0; c < 9; c++) {
				if (cube[a][b] != 0)
				cube[a+1][b+1] == '.';
				cube[a-1][b-1]=='.';
					
			}
		}
	}
	lico(cube, 0);
}


*/

//2022.4.6

/*
bool line[9][9];
bool column[9][9];
bool block[3][3][9];
int* space[81];
int spacesize;
void lico(char** cube, int dot) {
	int i, j;
	int row;
	int col;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (row = 0 && cube[i][row] != 0 && cube[i][row] != cube[i + 1][row]&&cube[i][row] != cube[i-1][row])
				printf("%d", cube[i][row]);
			if (col = 0 && cube[col][j] != 0 && cube[col][j] != cube[col][j + 1]&&cube[col][j] != cube[col][j -1])
				printf("%d", cube[col][j]);
		}
	}
	printf("%d", cube[i][j]);
	return;
}
void solveSudoku(char** cube, int boardsize, int* boardcolsize) {
	int a, b, c;
	for (a = 0; a < 3; a++) {
		for (b = 0; b < 3; b++) {
			for (c = 0; c < 9; c++) {
				if (cube[a][b] != 0 && cube[a][b] != cube[a + 1][b + 1]&&cube[a][b] != cube[a-1][b-1])
					printf("%d", cube[a][b]);

			}
		}
	}
	lico(cube, 0);
}
*/



