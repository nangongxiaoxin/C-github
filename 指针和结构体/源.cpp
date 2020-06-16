#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,* p, * q;
	scanf_s("%d%d",&a,&b);
	p = &a;
	q = &b;
	printf("%5d%5d", *p, *q);
	system("pause");
	return 0;
}