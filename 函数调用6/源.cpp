#include<stdio.h>
#include<stdlib.h>
float a = 10;
float b = 15;
int main()
{
	float max(float a, float b);
	float a;
	printf("����һ����15��Ƚϵ���: ");
	scanf_s("%f", &a);
	printf("������Ϊ%5.2f\n", max(a, b));

	system("pause");
	return 0;
}
float max(float a, float b)
{
	float c;
	c = a > b ? a : b;
	return(c);
}