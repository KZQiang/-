﻿#include <stdio.h>
int a[45];
int fibon(int);
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d\n", fibon(n));
	return 0;
}
int fibon(int n)
{
	if (a[n])
		return a[n];
	int f;
	switch (n)
	{
	case 0:f = 0; break;
	case 1:f = 1; break;
	default:f = fibon(n - 1) + fibon(n - 2);
	}
	return a[n] = f;
}