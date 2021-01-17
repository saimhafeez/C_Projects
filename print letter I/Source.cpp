#include <stdio.h>
#include <stdlib.h>
int main() {

	int stars, spaces, count, b;

	for (stars=1; stars<=9; stars++)
	{
		printf("*");
	}
	
	printf("\n");

	for (spaces = 1; spaces <= 5; spaces++)
	{
		for(b=1; b<=4; b++)
		{
			printf(" ");
		}
		
		printf("*\n");
	}

	for (stars = 1; stars <= 9; stars++)
	{
		printf("*");
	}

	printf("\n");
	system("pause");
	return 0;
}