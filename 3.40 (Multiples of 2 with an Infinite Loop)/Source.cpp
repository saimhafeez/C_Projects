#include <stdio.h>
#include <stdlib.h>

/*3.40 (Multiples of 2 with an Infinite Loop) Write a program that keeps printing the multiples of
the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your loop should not terminate (i.e., you should
create an infinite loop). What happens when you run this program?*/

int main()
{
	int no = 1;
	while (no != -1)
	{
		if (no % 2 == 0)
		{
			printf("%d\n", no);
		}
		no++;
	
	}

	system("pause");
	return 0;
}