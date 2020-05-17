#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double a, b;
	printf("请输入一个小于1000的整数：\n");
	scanf_s("%lf",&a);
	if (a > 0 && a < 1000)
	{
		b = sqrt(a);
		printf("%.0f的平方根是%.0f\n",a, b);
	}
	else
	{
		printf("输入错误！！！");
	}
	system("pause");
	return 0;
}