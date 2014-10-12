#include "gol.h"

int main(int argc, char *argv[])
{
	int percent, width, height;
	if(argc <= 1)
	{
		percent = 10;
		width = height = 30;
	}
	else if(argc == 2)
	{
		percent = abs(atoi(argv[1]));
		width = height = 30;
	}
	else if(argc == 3)
	{
		percent = 10;
		width = abs(atoi(argv[1]));
		height = abs(atoi(argv[2]));
	}
	else if(argc == 4)
	{
		percent = abs(atoi(argv[1]));
		width = abs(atoi(argv[2]));
		height = abs(atoi(argv[3]));
	}
	else
	{
		printf("Error! Too many arguments. Please try again with a maximum of three(percentage, width, and height).\n");
	}

	play(percent, width, height);

	return 0;
}
