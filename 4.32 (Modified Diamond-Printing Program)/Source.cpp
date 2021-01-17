#include <stdio.h>
#include <stdlib.h>

/*4.32 (Modified Diamond-Printing Program) Modify the program you wrote in Exercise 4.31 to
read an odd number in the range 1 to 19 to specify the number of rows in the diamond.
Your program should then display a diamond of the appropriate size.*/

int main()
{
	int spaces, user_rows, rows, out_loop, in_loop, stars = 1;

	printf("Enter Size (Max no. of rows) Odd No. form 1-19: ");
	scanf_s("%d", &user_rows);
	if (user_rows % 2 && user_rows<20 && user_rows >0)
	{
		rows = user_rows;
	}
	else
	{
		printf("enter odd no. from 1-19\n");
		system("pause");
		return 0;
	}
	spaces = rows - 1;

	for (out_loop = 1; out_loop <= rows * 2; out_loop++)
	{
		for (in_loop = 1; in_loop <= spaces; in_loop++)
		{
			printf(" ");
		}

		for (in_loop = 1; in_loop < stars * 2; in_loop++)
		{
			printf("*");
		}

		printf("\n");

		if (out_loop < rows)
		{
			spaces--;
			stars++;
		}

		else
		{
			spaces++;
			stars--;
		}
	}

	system("pause");
	return 0;
}