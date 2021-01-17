#include <stdio.h>
#include <stdlib.h>

float calculateCharges(float);

int main()
{
	int i, j=1, k;
	float y[3] = { 0 }, x[3] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("Enter Hour: ");
		scanf_s("%f", &y[i]);
		x[i] = calculateCharges(y[i]);
		k = y[i] + y[i ]

	}
	printf("Car\tHours\tCharge\n");
	for (i = 0; i < 3; i++, j++)
	{
		printf("%d\t%.1f\t%.2f\n",j, y[i], x[i]);
	}
	
	system("pause");
	return 0;
}

float calculateCharges(float hours)
{
	float charge, result, z;
	if (hours <= 3)
	{
		result = 2;
	}
	else if (hours == 24)
	{
		result = 24;
	}
	else if(hours > 3)
	{
		z = ((hours - 3)*2);
		result = z + (hours*0.5);
	}

	return result;
}