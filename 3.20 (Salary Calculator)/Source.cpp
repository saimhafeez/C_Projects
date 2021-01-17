#include <stdio.h>
#include <stdlib.h>

/*Develop a program that will determine the gross pay for each of several
employees. The company pays “straight time” for the first 40 hours worked by each employee and
pays “time-and-a-half” for all hours worked in excess of 40 hours. You’re given a list of the
employees of the company, the number of hours each employee worked last week and the hourly rate of
each employee. Your program should input this information for each employee and should determine and
display the employee's gross pay.*/

int main()
{
	float hours = 0, rate = 0, salary=0;
	while (hours != -1)
	{
		printf("\nEnter No. of Hours Worked (-1 to end): ");
		scanf_s("%f", &hours);
		if (hours != -1)
		{
			printf("\nEnter Hourly Rate ($00.00): ");
			scanf_s("%f", &rate);

			if (hours > 40)
				salary = hours * rate + ((hours - 40) * rate / 2);
			else
				salary = hours * rate;

			printf("\nSalary is %f", salary);
		}
	}

	system("pause");
	return 0;
}