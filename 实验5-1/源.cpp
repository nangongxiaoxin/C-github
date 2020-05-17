#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1, a = 0;
	do
	{
		a = i + a;
		i++;
		i = i + 1;
	} while (i >= 1 && i <= 100);
	printf("%d", a);
	system("pause");
	return 0;
}
