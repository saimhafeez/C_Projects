#include <stdio.h>
#include <stdlib.h>

/*4.26 (Calculating the Value of π) Calculate the value of π from the infinite series
Print a table that shows the value of π approximated by one term of this series, by two terms, by
three terms, and so on. How many terms of this series do you have to use before you first get 3.14?
3.141? 3.1415? 3.14159?*/

int main()
{
	float pi = 0, p = 4, q = 1;
	int count = 2, dis=1;
	
		pi = p / q;
		q+=2;
		printf("Term 1 = %f\n", pi);
	while (pi != -1)
	{
		if (count % 2 == 0)
		{
			pi = pi - (p / q);
			q += 2;
		}
		else
		{
			pi = pi + (p / q);
			q += 2;
		}
		count++;
		dis++;
		printf("Term %d = %f\n",dis, pi);
	}

	system("pause");
	return 0;
		
}