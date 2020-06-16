#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s=0;
	int sum(int a);
	printf("输入整数n的值:");
	printf("%d\n",sum(s));
	system("pause");
	return 0;
}
int sum(int s)
{
	int  i=0,n=0,a=0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a = i + a;
	}
	return(a);
	
}