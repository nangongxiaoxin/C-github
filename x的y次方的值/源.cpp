#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0,q=0,x,y;
	
	printf("����x��ֵ��");
	scanf_s("%d", &x);
	printf("����y��ֵ��");
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