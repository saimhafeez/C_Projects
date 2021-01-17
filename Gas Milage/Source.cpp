//Book Page no. 107, Solved; 3.16
#include <stdio.h>
#include <stdlib.h>
int main() {
	float gallon = 0, mile = 0, total=0, S_total = 0, S_gallon = 0, S_mile=0;

	while (gallon != -1)
	{
		printf("\nEnter amount of gallons, (-1 to end): ");
		scanf("%f", &gallon);

		if (gallon != -1) 
		{
		
			S_gallon = S_gallon + gallon;
			printf("\nEnter the miles run: ");
			scanf("%f", &mile);
			S_mile = S_mile + mile;
			total = mile / gallon;
			printf("\nMile Per Gallon For This Tankful: %f\n", total);
		}
	}
	S_total = S_mile / S_gallon;
	printf("\noverall average is %f \n", S_total);
	system("pause");
	return 0;
}