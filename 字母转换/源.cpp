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
		printf("����Ϊ����ĸ�����������룡��!");
	}
	printf("\n");
	system("pause");
	return 0;
}