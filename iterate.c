void iterate(void *b, int col, int row)
{
	unsigned (*board)[col] = b;
	unsigned newb[row][col];

	int i, j, i1, j1;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			int count = 0;
			for(i1 = (i - 1); i1 <= (i + 1); i1++)
			{
				for(j1 = (j - 1); j1 <= (j + 1); j1++)
				{
					if(board[(i1 + row) % row][(j1 + col) % col])
					{
						count++;
					}
				}
			}
			if(board[i][j])
			{
				count--;
			}
			newb[i][j] = (count == 3 || (count == 2 && board[i][j]));
		}
	}
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			board[i][j] = newb[i][j];
		}
	}
}
