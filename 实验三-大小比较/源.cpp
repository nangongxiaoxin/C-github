#include<stdio.h>
#include<stdlib.h>
/*
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
	if (a > b)
	{
		if (a > c)
			{
				printf("max=%d\n", a);
			}
		else
			{
			printf("max=%d\nmin=%d\n", c, b);
			}
	}
	else
	{
		if (b > c)
		{
			printf("max=%d\nmin=%d\n", a, c);
		}
		else
		{
			printf("max=%d\nmin=%d\n", c, a);
		}
	}
	system("pause");
	return 0;
}
*/

int main()
{
	int a, b, c,max=0;
	printf("请输入第一个数：");
	scanf_s("%d", &a);
	printf("请输入第二个数：");
	scanf_s("%d", &b);
	printf("请输入第三个数：");
	scanf_s("%d", &c);
	printf("  a=%d\n  b=%d\n  c=%d\n", a, b, c);
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	if (max > c)
	{
		printf("max=%d", max);
	}
	else
	{
		printf("max=%d", max=c);
	}

}

