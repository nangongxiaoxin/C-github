#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f(int);
	int a = 2, i;
	for (i = 0; i < 3; i++);
	{
		printf("%d\n", f(a));
	}
	system("pause");
	return 0;
}
int f(int a)
{
	
	int b = 0;
	static int c = 3;
	b = b + 1;
	c = c + 1;
	return(a + b + c);
}