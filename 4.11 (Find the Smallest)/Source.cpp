#include <stdio.h>
#include <stdlib.h>

/*4.11 (Find the Smallest) Write a program that finds the smallest of several integers. Assume that
the first value read specifies the number of values remaining.*/

int main()
{
	int value = 1, no=0, integer, small_no=0;

	printf("Enter no. of values to be used: ");
	scanf_s("%d", &no);

	printf("Enter any integer: ");
	scanf_s("%d", &integer);
	small_no = integer;

	while (value <=no)
	{
		printf("Enter any integer: ");
		scanf_s("%d", &integer);
		
		if (small_no > integer)
		{
			small_no = integer;
		}

		value++;
	}

	printf("Smallest Integer is %d\n", small_no);

	system("pause");
	return 0;

}
