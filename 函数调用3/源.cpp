#include<stdio.h>
#include<stdlib.h>
int main()
{
	int fac(int n);

	int n, y;
	printf("������һ����Ҫ�׳˵���������\n");
	scanf_s("%d", &n);
	y = fac(n);
	printf("%d!=%d", n, y);

	system("pause");
	return 0;
}
int fac(int n)
{
	int f=0;
	if (n < 0)
	{
		printf("�������");
	}
	else if (n == 0 || n == 1)
	{
		f = 1;
	}
	else
	{
		f = fac(n - 1) * n;
	}
	return(f);//����fac��ֵΪf
}