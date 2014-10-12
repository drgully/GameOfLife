#include "gol.h"

void play(int percent, int col, int row)
{
	unsigned board[row][col];
	int i, j;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			unsigned result = 0;
			if((rand() % 100) < percent)
			{
				result = 1;
			}
			board[i][j] = result;
		}
	}

	while(1)
	{
		system("clear");
		display(board, col, row);
		fflush(stdout);
		iterate(board, col, row);
		usleep(200000);
	}
}
