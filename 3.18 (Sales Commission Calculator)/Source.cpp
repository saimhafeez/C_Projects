#include <stdio.h>
#include <stdlib.h>
int main() {
	float sale=0, com_sale;

	while (sale != -1) {
		printf("\nEnter Your Sale (-1 to end): $ ");
		scanf_s("%f", &sale);
		com_sale = 200 + (sale * 0.09);

		if (sale != -1)
		{
			printf("\nYour Pay is $ %f\n", com_sale);
		}
	}

	system("pause");
	return 0;
}