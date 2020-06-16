#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p, * q;
	int a, b;
	scanf_s("%d%d", &a, &b);
	p = &a;
	q = &b;
	if (*p < *q)
	{
		printf("%d     %d", *p, *q);
	}
	else
	{
		printf("%d    %d", *q, *p);
	}
	system("pause");
	return 0;
}