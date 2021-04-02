#include"stdio.h"
void main()
{
	int num1, num2, num3, sum;
	float aver;
	printf("please input three numbers:");
	scanf_s("%d,%d,%d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	aver = sum / 3.0;
	printf("num1=%d,num2=%d,num3=%d\n", num1, num2, num3);
	printf("sum=%d,aver=%7.2f\n", sum, aver);
}