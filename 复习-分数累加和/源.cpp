#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a = 1;
	for (int i = 2; i <= 100; i++)
	{
		a = a +1.0* 1 / i;
	}
	printf("%f\n", a);
	system("pause");
	return 0;
}