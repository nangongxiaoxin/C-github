#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1, a = 0;
	while (i >= 1 && i <= 100)
	{
		a = i + a;
		i++;
	}
	printf("%d", a);
	system("pause");
	return 0;
}