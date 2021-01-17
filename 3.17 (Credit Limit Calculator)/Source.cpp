#include <stdio.h>
#include <stdlib.h>
int main()
{
	int acc_no=0;
	float beg_bal, t_charges, t_credit, l_credit, balance;
	while (acc_no != -1)
	{
		printf("\nEnter Account No. (-1 to End): ");
		scanf("%d", &acc_no);

		if (acc_no != -1)
		{
			printf("\nEnter Beginning Balance: ");
			scanf("%f", &beg_bal);

			printf("\nEnter total charges: ");
			scanf("%f", &t_charges);

			printf("\nEnter total credit: ");
			scanf("%f", &t_credit);

			printf("\nEnter Credit Limit: ");
			scanf("%f", &l_credit);

			balance = beg_bal + t_charges - t_credit;

			printf("\nAccount: %d\n", acc_no);

			printf("Credit Limit: %f\n", l_credit);

			printf("Balance: %f\n", balance);

			if (balance > l_credit)
			{
				printf("Credit Limit Exceeded !\n");
			}

		}

	}

	system("pause");
	return 0;
}