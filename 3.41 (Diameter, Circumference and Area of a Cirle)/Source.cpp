#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159;

/*3.41 (Diameter, Circumference and Area of a Cirle) Write a program that reads the radius of a
circle (as a float value) and computes and prints the diameter, the circumference and the area. Use
the value 3.14159 for π.*/

int main()
{
	float rad, cir = 0, area = 0, dia = 0;

	printf("Enter the Radius of Circle in meters: ");
	scanf_s("%f", &rad);


	dia = 2 * rad;
	cir = 2 * rad * PI;
	area = (rad * rad) * PI;

	printf("\nDiameter is %.1f meters\n\nCircumference is %.2f meters\n\nArea is %.2f meter Sq\n\n", dia, cir, area);

	system("pause");
	return 0;

}