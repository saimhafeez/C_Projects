#include <stdio.h>
#include <stdlib.h>

/*3.43 (Sides of a Triangle) Write a program that reads three nonzero integer
  values and determines and prints whether they could represent the sides of a triangle.*/

int main()
{
	int no_1=0, no_2=0, no_3=0;
	
	printf("Enter Value 1: ");
	scanf_s("%d", &no_1);

	printf("Enter Value 1: ");
	scanf_s("%d", &no_2);

	printf("Enter Value 1: ");
	scanf_s("%d", &no_3);

	if (no_1 + no_2 > no_3 && no_1 + no_3 > no_2 && no_2 + no_3 > no_1)
	{
		printf("The Values represent the sides of a triangle\n");
	}
	else
	{
		printf("The Values Does not represents sides of triangle\n");
	}

	system("pause");
	return 0;
}