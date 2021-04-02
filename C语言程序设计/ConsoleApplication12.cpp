#include<stdio.h>
void main()
{
	float x, y;
	scanf_s("%f", &x);
	if (x < -20)
	y = 0.55*x + 3.8;
	else
		y = 1.6*x - 8;
	printf("f(%f)=%f\n", x, y);
}