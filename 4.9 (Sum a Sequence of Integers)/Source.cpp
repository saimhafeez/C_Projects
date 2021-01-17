#include <stdio.h>
#include <stdlib.h>

/*4.9 (Sum a Sequence of Integers) Write a program that sums a sequence of integers. Assume that
the first integer read with scanf specifies the number of values remaining to be entered.
Your program should read only one value each time scanf is executed. A typical input sequence might be
5 100 200 300 400 500
where the 5 indicates that the subsequent five values are to be summed.*/

int main()
{
	int no, loop = 1, value=0, sum = 0;
	printf("Enter No. of values to be added: ");
	scanf_s("%d", &no);

	while (loop <= no)
	{
		printf("Enter value %d: ", loop);
		scanf_s("%d", &value);
		sum = sum + value;
		loop++;
	}

	printf("Sum = %d\n", sum);

	system("pause");
	return 0;
}