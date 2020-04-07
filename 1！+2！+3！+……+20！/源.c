#include<stdio.h>
#include<stdlib.h>
int main()
{
	float i = 1;
	float a = 1;
	float sum = 1;

	for (; i <= 20; i++)
	{
		a =a+a * i;
		sum = sum + a;

	}
	printf("1+2!+3!+...+20!=%.0f",sum);
	system("pause");
	return 0;
}
