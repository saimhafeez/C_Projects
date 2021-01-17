#include <stdio.h>
#include <stdlib.h>

/*3.44 (Sides of a Right Triangle) Write a program that reads three nonzero
  integers and determines and prints whether they could be the sides
  of a right triangle.*/

int main()
{
	int a = 0, b = 0, c = 0, con=0;

	printf("Enter value 1: ");
	scanf_s("%d", &a);
	a = a * a;

	printf("Enter value 2: ");
	scanf_s("%d", &b);
	b = b * b;

	printf("Enter value 3: ");
	scanf_s("%d", &c);
	c = c * c;

	con = a + b;

	if (con == c)
	{
		printf("The Values represents the sides of a right triangle.\n");
	}
	else
	{
		printf("The Values does not represents the sides of a right triangle.\n");
	}

	system("pause");
	return 0;
}
