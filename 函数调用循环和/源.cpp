#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	int sum(int x);
	scanf_s("%d", &a);
	printf("%d\n", sum(a));
	system("pause");
	return 0;
}
int sum(int x)
{
	int i, a = 1;
	for (i = 1; i <= x; i++)
	{
		a = a * i;
	}
	return (a);
}