#include <stdio.h>
#include <stdlib.h>

/*4.16 (Triangle-Printing Program) Write a program that prints the following patterns separately,
one below the other. Use for loops to generate the patterns. All asterisks (*) should be printed by a
single printf statement of the form printf( "%s", "*" ); (this causes the asterisks to print side by
side). [Hint: The last two patterns require that each line begin with an appropriate number of blanks.]
(A)      (B)    (C)     (D)
* ********** **********   *
** ********* *********   **
*** ******** ********   ***
**** ******* *******   ****
***** ****** ******   *****
****** ***** *****   ******
******* **** ****   *******
******** *** ***   ********
********* ** **   *********
********** * *   **********

*/

int main()
{
	int a_rows, a_outloop=1, a_inloop, a_count=1;
	
	printf("Part a\n");

	printf("Enter no.of rows : ");
	scanf_s("%d", &a_rows);

	for (a_outloop = 1; a_outloop <= a_rows; a_outloop++)
	{
		for (a_inloop=1; a_inloop<=a_count; a_inloop++)
		{
			printf("*");
		}
		printf("\n");
		a_count++;

	}

	system("pause");
	
	int b_rows, b_outloop, b_inloop = 1, b_count, b_spaces=0, b_stars;
	printf("part b\n");

	printf("Enter no. of rows : ");
	scanf_s("%d", &b_rows);
	b_stars = b_rows;

	for (b_outloop = 1; b_outloop <= b_rows; b_outloop++)
	{
		for (b_inloop = 1; b_inloop <= b_spaces; b_inloop++)
		{
			printf(" ");
		}

		for (b_inloop = 1; b_inloop <= b_stars; b_inloop++)
		{
			printf("*");
		}

		printf("\n");

		b_spaces++;
		b_stars--;

	}

	
	system("pause");
	return 0;
}