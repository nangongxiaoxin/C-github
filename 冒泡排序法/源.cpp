#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a,b;
	int f[10];
	printf("请输入10个需要排序的数：\n");
	for (a = 0; a < 10; a++)
	{
		scanf_s("%d", &f[a]);
	}

	for (i = 0; i < 9; i++)           //输入10个数，进行9趟循环比较大小
	{
		for (a = 0; a < 9 - i; a++)   //第i趟循环，比较9-i次
		{
			if (f[a] > f[a + 1])      //比较相邻两个数的大小，决定是否交换位置
			{
				b = f[a];
				f[a] = f[a + 1];
				f[a + 1] = f[a];
			}
		}
	}
	printf("排序后的数为：\n");
	for (a = 0; a < 10; a++)
	{
		printf(" %d", f[a]);
	}
	printf("\n");
	return 0;
	system("pause");
}