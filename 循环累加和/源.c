#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1;
	int sum1 = 0;
	int b = 1;
	int c = 0;
	int sum2 = 0;
	float d = 1;
	float sum3 = 0;
	float sum = 0;

	while (a <= 100)
	{
		sum1 = sum1 + a;
		a++;
	}

	do
	{
		sum2 = sum2+c*c;
		c=b++;
	} while (c <= 50);

	for (; d <= 10;)
	{
		sum3 = sum3+1/(d++);	
	}

	sum = sum1 + sum2 + sum3;

	printf("和为:%3.2f",sum);
	system("pause");
	return 0;
}
