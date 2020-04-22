#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int a,b;
	float x,y ;
	char c1,c2 ;
	
	scanf_s("%d%d",&a,&b);
	scanf_s("%f%f",&x,&y);
	scanf("%c%c",&c1,&c2);

	printf("a=%d,b=%dx=%2.1f,y=%4.2f,c1=%c,c2=%c",a,b,x,y,c1,c2);

	system("pause");
	return 0;
}