#include<stdio.h>
#include<stdlib.h>
int main()
{
	double a[5] = { 5,1,2,3,4 };
	double b = 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		b = a[i] + b;
	}
	printf("%.0f\n", b / 5);
	system("pause");
	return 0;

}
