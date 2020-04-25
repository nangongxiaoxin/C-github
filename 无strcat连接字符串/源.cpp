#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[50], b[50];
	int c = 0, d = 0;
	printf("请输入第一个字符串:\n");
	gets_s(a);
	printf("请输入第二个字符串：\n");
	gets_s(b);
	for (c = strlen(a); b[d] != '\0'; d++)
	{
		a[c++] = b[d];
	}
	a[c] = '\0';
	printf("连接后的字符串为：\n%s\n", a);
	system("pause");
	return 0;
}