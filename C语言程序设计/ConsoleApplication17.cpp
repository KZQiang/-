// ConsoleApplication17.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#define N 8
int main()
{
	int a[N], i, m, j, index, midindex = -1;
	int low, high, mid, temp;
	printf("\ninput ten numbers:");
	for (i = 0; i <= N - 1; i++)
		scanf_s("%d", &a[i]);
	printf("input search number:\n");
	scanf_s("%d", &m);
	for (i = 0; i < N; i++)
	{
		index = i;
		for (j = i; j <= N - 1; j++)
			if (a[j] < a[index])  index = j;
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}
	low = 0;
	high = N - 1;
	while (low < high)
	{
		mid = (low + high) / 2;
		if (m > a[mid])
		low = mid + 1;
		else if(m < a[mid])
		high = mid - 1;
		else
		{
			midindex = mid;
			break;
		}
	}
	printf("output data:\t\n");
	for (i = 0; i <= N - 1; i++)
		printf("%d", a[i]);
	if (midindex != -1)
		printf("\n midindex=%d", midindex);
	else
		printf("\nnot found!");
}