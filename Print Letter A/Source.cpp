#include <stdlib.h>
#include <stdio.h>

int main()
{
	int stars=1, spaces_1, spaces_2, out_loop, in_loop, rows = 5, rows_ = 5, _rows=1;
	
	for (out_loop = 1; out_loop <= rows; out_loop++)
	{
		if (out_loop == 1)
		{
			for (spaces_1 = 1; spaces_1 <= 6; spaces_1++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
		
		for (spaces_1 = 1; spaces_1 <=  rows_; spaces_1++)
		{
			printf(" ");
		}
		rows_--;
		printf("*");

		for (spaces_2 = 1; spaces_2 <=_rows; spaces_2++)
		{
			if (out_loop == 3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		_rows+=2;
		printf("*");

		printf("\n");

	}

	system("pause");
	return 0;
}