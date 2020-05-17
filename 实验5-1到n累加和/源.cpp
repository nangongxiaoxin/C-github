#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n, a = 0;
	printf("输入整数n的值:\n");
	scanf_s("%d", &n);
	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			a = i + a;
		}
		printf("1到%d的累加和为：%d\n", n, a);
	}
	else
	{
		printf("输入错误\n");
	}

	system("pause");
	return 0;
}