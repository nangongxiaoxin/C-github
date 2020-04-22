#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d;
	printf("请输入一个3位整数：");
	scanf_s("%d", &a);
	if (a > 99 && a < 1000)
	{
		b = a / 100;
		c = (a - b * 100) / 10;
		d = a - b * 100 - c * 10;
		printf("%d的百位为：%d\n     十位为：%d\n     个位为：%d\n", a, b, c, d);
	}
	else
	{
		printf("请正确输入一个三位整数\n");
	}
	system("pause");
	return 0;
}