#include<stdio.h>
#include<stdlib.h>
int main()
{
	int b(int x);
	int a;
	scanf_s("%d", &a);
	a = b(a);
	printf("%d\n", a);
	system("pause");
	return 0;
}
int b(int x)
{
	if (x > 0)
	{
		x = -x;
		return (x);
	}
	else
	{
		return (x);
	}
}