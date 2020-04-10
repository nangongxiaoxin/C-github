#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i;
	for (a = 100; a <= 200; a++)
	{
		for (i = 2; i <= a - 1; i++)
			if (a % i == 0)break;
		if (a == i)printf("%d\n", a);
	}

	system("pause");
	return 0;
}