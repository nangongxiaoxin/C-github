#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x;
	scanf_s("%f", &x);
	if (x > 0)
	{
		printf("1\n");
	}
	if (x == 0)
	{
		printf("0\n");
	}
	else if (x < 0)
	{
		printf("-1\n");
	}
	system("pause");
	return 0;
}