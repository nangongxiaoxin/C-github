#include<stdio.h>
#include<stdlib.h>
int main()
{
	char x;
	printf("输入待转换的大写字母：");
	scanf_s("%c",&x);
	
	printf("%c\n",x=x+32);

	system("pause");
	return 0;
}