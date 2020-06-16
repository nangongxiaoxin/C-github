#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0,q=0,x,y;
	
	printf("输入x的值：");
	scanf_s("%d", &x);
	printf("输入y的值：");
	scanf_s("%d", &y);

	int t(int x,int y);

	printf("%d\n", t(x,y));
	system("pause");
	return 0;
}
int t(int x,int y)
{
	int s=1;
	for (int i = 0; i < y; i++)
	{
		s = s * x;
	}
	return s;
}