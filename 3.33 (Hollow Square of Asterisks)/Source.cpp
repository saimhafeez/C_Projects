#include <stdio.h>
#include <stdlib.h>

/*Modify the program you wrote in Exercise 3.32 so that it
prints a hollow square.*/

int main()
{
	int rows, in_loop, out_loop, w_loop = 1, s_loop, s_rows = 0, se_loop, sl_loop = 3;

	printf("Enter No. of rows/cloumns for Square: ");
	scanf_s("%d", &rows);
	s_rows = rows - 2;
	printf("\n");

	for (out_loop = 1; out_loop <= rows; out_loop++)          //outer loop defines lines
	{
		while (w_loop == 1 || w_loop == rows)                 //defines 1st and last line
		{
			for (se_loop = 1; se_loop <= rows; se_loop++)
			{
				printf("*");
			}

			printf("\n");
			w_loop++;
		}

		if (sl_loop <= rows)                               //defines 2nd to 2nd last line with spaces.
		{
			printf("*");

			for (s_loop = 1; s_loop <= s_rows; s_loop++)
			{
				printf(" ");
			}

			printf("*");
			printf("\n");
			sl_loop++;
		}

		if (out_loop == rows - 1)                              //assign value for last line
		{
			w_loop = rows;
		}
	}

	system("pause");
	return 0;
}