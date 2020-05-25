#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j ,iTemp;
	int a[5];
	for (i = 0; i < 5; i++)
	{
		printf("输入a[%d]个数：",i);
		scanf_s("%d", &a[i]);
		printf("\n");
	}
	for (i = 1; i < 5; i++)					//i控制每次内层 for排序后，从a[0]到a[i]是已经筛选过的最小数排序
	{
		for (j = 4; j >= i; j--)			//j>=i指的是j在>=i时应该经行for里面的循环
		{
			if (a[j] < a[j - 1])			//始终保持后一个数小于前一个数
			{
				iTemp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = iTemp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", a[i]);
		if (i == 4)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}