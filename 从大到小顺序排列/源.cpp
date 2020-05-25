#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[6] = { 8,6,5,4,1,9 };
	int i, b, N = 6;
	for (i = 0; i < N / 2; i++)
	{
		b = a[i];
		a[i] = a[N - 1];
		a[N-1] = b;
		N--;
	}
	for (i = 0; i < 6; i++)
	{
		printf(" %d", a[i]);
	}
	system("pause");
	return 0;
}