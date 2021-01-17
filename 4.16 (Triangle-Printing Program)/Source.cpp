#include <stdio.h>
#include <stdlib.h>

int main()
{
	int no_a, a_outloop, a_inloop, count_a=1;
	printf("Part a\n");

	printf("Enter no. of rows: ");
	scanf_s("%d", &no_a);
	

	for (a_outloop = 1; a_outloop <= no_a; a_outloop++)
	{
		for (a_inloop = 1; a_inloop <= count_a; a_inloop++)
		{
			printf("*");
		}
		count_a++;
		printf("\n");
	}

	system("pause");

	int no_b, b_outloop, b_inloop, count_b = 1;
	printf("Part b\n");

	printf("Enter no. of rows: ");
	scanf_s("%d", &no_b);

	count_b = no_b;

	for (b_outloop = 1; b_outloop <= no_b; b_outloop++)
	{
		for (b_inloop = 1; b_inloop <= count_b; b_inloop++)
		{
			printf("*");
		}
		count_b--;
		printf("\n");
	}
	system("pause");

	int no_c, c_outloop, c_inloop, stars_c = 1, spaces_c=0;
	printf("Part c\n");

	printf("Enter no. of rows: ");
	scanf_s("%d", &no_c);

	stars_c = no_c;

	for (c_outloop = 1; c_outloop <= no_c; c_outloop++)
	{
		for (c_inloop = 1; c_inloop <= spaces_c; c_inloop++)
		{
			printf(" ");
		}
		spaces_c++;
		for (c_inloop = 1; c_inloop <= stars_c; c_inloop++)
		{
			printf("*");
		}
		stars_c--;
		printf("\n");
	}
	system("pause");

	int no_d, d_outloop, d_inloop, stars_d = 1, spaces_d;
	printf("Part d\n");

	printf("Enter no. of rows: ");
	scanf_s("%d", &no_d);

	stars_d = 1;
	spaces_d = no_d-1;

	for (d_outloop = 1; d_outloop <= no_d; d_outloop++)
	{
		for (d_inloop = 1; d_inloop <= spaces_d; d_inloop++)
		{
			printf(" ");
		}
		spaces_d--;
		for (d_inloop = 1; d_inloop <= stars_d; d_inloop++)
		{
			printf("*");
		}
		stars_d++;
		printf("\n");
	}
	system("pause");
	return 0;
}