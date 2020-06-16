#include<stdio.h>
#include<stdlib.h>
int f(int n)
{
	static int a = 1;
	a *= n;
	return a;
}
int main()
{
	int n, sum = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum = f(i);
	}
	printf("sum = %d", sum);
	system("pause");
	return 0;
}
