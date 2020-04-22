#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int i, j, t;
	printf("请输入10个需要排序的数：\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	printf("\n");
	for (j = 0; j < 9; j++)           
		for (i = 0; i < 9 - j; i++) 
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] =t;
			}
	printf("排序后最大的数为：\n");
	printf("%d", a[9]);
	printf("\n");

	return 0;
	system("pause");
}