#include<stdio.h>
#include<stdlib.h>
void f(int* a)
{
	int max = a[0], min = a[0], sum = 0;
	double ave = 0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
			max = a[i];
		else
			min = a[i];
		sum += a[i];
	}
	ave = sum / 10;
	printf("平均分数：%lf\n最高分：%d\n最低分：%d\n", ave, max, min);
}
int main()
{
	int a[10], sum = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	f(a);
	system("pause");
	return 0;
}
