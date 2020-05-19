#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a = 1, b = 2, c, d, sum = 0;
	int i;
	for (i = 1; i <= 20; i++)
	{
		d = b / a;
		c = b + a;
		a = b;
		b = c;
		sum = sum + d;
	}
	printf("%f\n", sum);

	system("pause");
	return 0;
}
