#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int sum(int n);
	printf("输入n的值：");
	scanf_s("%d", &n);
	printf("%d的阶乘为：%d\n", n, sum(n));
	system("pause");
	return 0;
}
int sum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * sum(n - 1);
	}
}