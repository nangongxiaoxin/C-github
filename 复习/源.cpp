#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,sum = 0;
	int f(int n);
	int write(int x);
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum = f(i);
	}
	printf("sum = %d", sum);
	write(sum);
	system("pause");
	return 0;
}
int f(int n)
{
	int a = 1;
	a = a * n; 
	return a;
}
int write(int x)
{ 

}