#include <stdio.h>
#include <stdlib.h>

int main()
{
	int L_no=0, SL_no=0, value=0, count = 2, a=0;

	printf("Enter value 1 (-1 to end):");
	scanf_s("%d", &value);

	L_no = value;

	while (value != -1)
	{
		printf("Enter value %d (-1 to end):", count);
		scanf_s("%d", &value);
		
		if (value != -1)
		{
			

			if (value > L_no)
			{
				SL_no = L_no;
				L_no = value;
			}
			else if(value>SL_no && value<L_no)
			{
				SL_no=value;
			}

		}
		count++;
	}

	printf("The Largest no. is %d\n", L_no);
	printf("The 2nd Largest no. is %d\n", SL_no);

	system("pause");
	return 0;
}