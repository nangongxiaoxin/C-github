#include<stdio.h>
#include<stdlib.h>
int main()
{
	int fun(int n);

	int n, y;
	printf("请输入一个大于0的整数：\n");
	scanf_s("%d", &n);
	y = fun(n);
	printf("fun(%d)=%d", n, y);
	printf("\n");
	system("pause");
	return 0;
}
int fun(int n)
{
	int f = 0;
	if (n < 0)
	{
		printf("输入错误！");
	}
	else if (n == 1)
	{
		f = 10;
	}
	else
	{
		f = fun(n - 1) + 2;
	}
	return(f);//返回fun的值为f
}