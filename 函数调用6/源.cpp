#include<stdio.h>
#include<stdlib.h>
float a = 10;
float b = 15;
int main()
{
	float max(float a, float b);
	float a;
	printf("输入一个与15相比较的数: ");
	scanf_s("%f", &a);
	printf("最大的数为%5.2f\n", max(a, b));

	system("pause");
	return 0;
}
float max(float a, float b)
{
	float c;
	c = a > b ? a : b;
	return(c);
}