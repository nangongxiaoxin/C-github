#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int sum(int n);
	printf("����n��ֵ��");
	scanf_s("%d", &n);
	printf("%d�Ľ׳�Ϊ��%d\n", n, sum(n));
	system("pause");
	return 0;
}
int sum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * sum(n - 1);
	}
}