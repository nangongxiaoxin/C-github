#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	printf("请输入第一个数：");
	scanf_s("%d", &a);
	printf("请输入第二个数：");
	scanf_s("%d", &b);
	printf("请输入第三个数：");
	scanf_s("%d", &c);
	printf("  a=%d\n  b=%d\n  c=%d\n", a, b, c);
	if (a >= b)
	{
		if (b >= c)
		{
			printf("%d %d %d", a, b, c);
		}
		if (b < c)
		{
			if (a >= c)
			{
				printf("%d %d %d", a, c, b);
			}
			else
			{
				printf("%d %d %d", c, a, b);
			}
		}
	}
	else
	{
		if (c >= b)
		{
			printf("%d %d %d", c, b, a);
		}
		if(c<b)
			if (a >= c)
			{
				printf("%d %d %d", b, a, c);
			}
			else
			{
				printf("%d %d %d", b, c, a);
			}
	}
	system("pause");
	return 0;
}