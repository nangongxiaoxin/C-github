#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	int a[5];
	int iTemp;
	printf("请输入将要排序的5个数：\n");
	for (i = 0; i < 5; i++)
	{
		printf("a[%d]:", i);
		scanf_s("%d", &a[i]);
		printf("\n");
	}
	for (i = 0; i < 4; i++)						//设置下标
	{
		for (j = i + 1; j < 5; j++)
		{
			if (a[j] < a[i])					//从啊a[i]的下一个数开始与a[i]比较，如果满足if则 交换 值
			{									//依次选出未排序中最小的值
				iTemp = a[i];
				a[i] = a[j];
				a[j] = iTemp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf(" %d", a[i]);
		if (i == 4)
		{
			printf("\n");
		}
	}
	
	system("pause");
	return 0;
}