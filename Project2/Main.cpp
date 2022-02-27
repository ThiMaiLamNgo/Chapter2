#include<stdio.h>
#pragma
int main()
{
	printf("Enter a: ");
	int a, b;
	scanf_s("%d", &a);
	printf("Enter b: ");
	scanf_s("%d", &b);
	float div = (float)a / b;
	printf("Sum %d + %d =  %d\n", a, b, a + b);
	printf("Sub %d - %d =  %d\n", a, b, a - b);
	printf("Multiple %d * %d =  %d\n", a, b, a * b);
	b != 0 ? printf("Div a/b = %f\n", div): printf("Nhap b > 0");
}