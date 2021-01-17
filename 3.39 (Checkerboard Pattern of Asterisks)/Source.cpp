#include <stdio.h>
#include <stdlib.h>

/*3.39 (Checkerboard Pattern of Asterisks) Write a program that displays the following checkerboard pattern:*/

int main()
{
	int in_loop, out_loop, stars, spaces=0, rows;

	printf("Enter no. of rows: ");
	scanf_s("%d", &rows);

	for (in_loop = 1; in_loop <= rows; in_loop++)
	{
		if (spaces == in_loop)
		{
			printf(" ");
		}
		if (spaces<in_loop)
		{
			spaces += 2;
		}
		for (out_loop = 1; out_loop <= rows; out_loop++)
		{
			printf("* ");
		}
		
		printf("\n");
	}

	system("pause");
	return 0;
}