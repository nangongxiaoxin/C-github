#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[50], b[50];
	int c = 0, d = 0;
	printf("�������һ���ַ���:\n");
	gets_s(a);
	printf("������ڶ����ַ�����\n");
	gets_s(b);
	for (c = strlen(a); b[d] != '\0'; d++)
	{
		a[c++] = b[d];
	}
	a[c] = '\0';
	printf("���Ӻ���ַ���Ϊ��\n%s\n", a);
	system("pause");
	return 0;
}