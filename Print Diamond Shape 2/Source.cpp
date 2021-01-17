#include <stdio.h>
#include <stdlib.h>

/*4.31 (Diamond-Printing Program) Write a program that prints the following diamond shape.
You may use printf statements that print either a single asterisk (*) or a single blank. Maximize
your use of repetition (with nested for statements) and minimize the number of printf statements*/
int main()
{
	int spaces, rows, out_loop, in_loop, stars=1;

	printf("Enter Size (Max no. of rows): ");
	scanf_s("%d", &rows);
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