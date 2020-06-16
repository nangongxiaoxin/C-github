#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[128], b[128];
	int i, j = 0;
	printf("a:");
	gets_s(a);
	printf("b:");
	gets_s(b);
	i = strlen(a);
	j = strlen(b);
	printf("%d %d\n", i, j);
	if (i > j)
	{
		printf("a字符组长\n");
	}
	else
	{
		printf("b字符组长\n");
	}
	printf("%s", strcat_s(a, b));
	system("pause");
	return 0;
}