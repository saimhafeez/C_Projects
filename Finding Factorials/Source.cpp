#include <stdio.h>
#include <stdlib.h>

/*Finding Factorial of a number*/

int main()
{
	int n=0, a, f=1, count = 1;
	
	printf("For n! (factorial) Enter Value of 'n': ");
	scanf_s("%d", &n);

	for (a = 1; a <= n; a++)
	{
		
		f = f * a;
	}

	printf("\n%d! = %d", n, f);
	printf("\n");
	system("pause");
	return 0;
}