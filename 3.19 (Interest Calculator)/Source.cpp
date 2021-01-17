#include <stdio.h>
#include <stdlib.h>
int main() {
	float P_amount=0, rate=0, days=0, interest;
	while (P_amount != -1) {

		printf("\nEnter loan Principal Amount (-1 to end): ");
		scanf_s("%f", &P_amount);

		if (P_amount != -1) {
			printf("\nEnter Interest Rate: ");
			scanf_s("%f", &rate);
			printf("\nEnter Terms of loan in days: ");
			scanf_s("%f", &days);
			interest = (P_amount * rate * days) / 365;
			printf("\nInterest Charge: %f\n", interest);
		}
	}
	system("pause");
	return 0;
}