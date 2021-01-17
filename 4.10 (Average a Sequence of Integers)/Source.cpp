#include <stdio.h>
#include <stdlib.h>

/*4.10 (Average a Sequence of Integers) Write a program that calculates and prints the average of
several integers. Assume the last value read with scanf is the sentinel 9999. A typical input sequence
might be
10 8 11 7 9 9999
indicating that the average of all the values preceding 9999 is to be calculated.*/

int main()
{
	int value = 0, sum = 0, count=0, ave=0;

	while (value != 9999)
	{
		printf("Enter value (put 9999 to end): ");
		scanf_s("%d", &value);
		
		if (value != 9999)
		{
			sum = sum + value;
			count++;
		}

	}

	ave = sum / count;
	
	printf("Average = %d\n", ave);

	system("pause");
	return 0;
}