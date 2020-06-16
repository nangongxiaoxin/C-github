#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3];
	int i, j;
	//输入
	printf("请输入值：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("a[%d][%d]:", i, j);
			scanf_s("%d", &a[i][j]);
			printf("\n");
		}
	}
	//输出
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("  %d", a[i][j]);
			if (j == 2)
			{
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}