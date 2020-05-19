#include<stdio.h>
#include<stdlib.h>
float pai = 3.14;
int main()
{
	float a, b, c;
	int i;
	for (i = 1; i <= 10; i++)
	{
		a = pai * i * i;
		if (a < 200)
		{
			printf("%f\n", a);
		}
	}


	system("pause");
	return 0;
}
