#include <stdio.h>
#include <stdlib.h>

/*Write a program that reads in the side of a square and then prints that
square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. */

int main() 
{
	int rows, in_loop, out_loop;
	
	printf("Enter No. of rows/cloumns for Sqaure: ");
	scanf_s("%d", &rows);
	printf("\n");
	for (out_loop = 1; out_loop <= rows; out_loop++)
	{
		for (in_loop = 1; in_loop <= rows; in_loop++)
			printf("*");
		    printf("\n");
	}

	system("pause");
	return 0;
}