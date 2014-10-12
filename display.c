#include "gol.h"

void display(void *b, int col, int row)
{
	unsigned (*board)[col] = b;
	int i, j;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			if(board[i][j])
			{
				printf("%-3c", 'x');
			}
			else
			{
				printf("%-3c", ' ');
			}
		}
		printf("%-d\n", i);
	}
	for(i = 0; i < col; i++)
	{
		printf("%-3d", i);
	}
}
