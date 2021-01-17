#include <stdio.h>
#include <stdlib.h>

int main()
{
	int stars, spaces, out_loop, in_loop, rows_s=8, rows = 8, rows_st=7;

	for (out_loop = 1; out_loop <= rows; out_loop++)
	{
		for (spaces = 1; spaces <= rows_s; spaces++)
		{
			printf(" ");
		}
		rows_s--;
		if (out_loop == 1)
		{
			for (stars = 1; stars <= 4; stars++)
			{
				printf("*");
			}printf("\n");
				
		}
		else if(out_loop<=3 && out_loop>1)
		{
			printf("*");
			printf("\n");
		}
		else if (out_loop ==4)
		{
			printf(" ");
			for (stars = 1; stars <= 4; stars++)
			{
				printf("*");
			}
			printf("\n");
		}
		
		
	}


	system("pause");
	return 0;
}