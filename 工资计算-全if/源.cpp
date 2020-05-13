#include<stdio.h>
#include<stdlib.h>
int main()
{
	double a = 0, b = 0;
	printf("请输入工资：\n");
	scanf_s("%lf", &a);
	if (a >= 0)
	{
		if (a < 10000)
		{
			b = 200 + a * 0.03;
		}
		else if (a < 30000)
		{
			b = 260 + a * 0.07;
		}
		else if (a < 50000)
		{
			b = 320 + a * 0.12;
		}
		else if (a >= 50000)
		{
			b = 380 + a * 0.16;
		}
		printf("工资为：%.2f\n", b);
	}
	else
	{
		printf("输入错误");
	}

	system("pause");
	return 0;
}