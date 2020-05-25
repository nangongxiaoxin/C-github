#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a;
	a=getchar();
	if (65 <= a && a <= 90)
	{
		putchar(a + 32);
	}
	else if(97<=a&&a<=122)
	{
		putchar(a - 32);
	}
	else
	{
		printf("输入为非字母，请重新输入！！!");
	}
	printf("\n");
	system("pause");
	return 0;
}