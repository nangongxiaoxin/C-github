#include<stdio.h>
#include<stdlib.h>
void CeleritryRun(int left, int right, int array[]);
int main()
{
	int i, a[10];
	printf("为数组元素赋值：\n");
	for (i = 0; i < 10; i++)
	{
		printf("a[%d]:", i);
		scanf_s("%d", &a[i]);
	}
	CeleritryRun(0, 9, a);
	for (i = 0; i < 10; i++);
	{
		printf("%d\t", a[i]);
		if (i == 4)
		{
			printf("\n");
		}
	}
	return 0;
	system("pause");
}
void CeleritryRun(int left, int right, int array[])
{
	int i, j;
	int middle, iTemp;
	i = left;
	j = right;
	middle = array[(left + right) / 2];
	do
	{
		while ((array[i] < middle) && (i < right))
		{
			i++;
		}
		while ((array[i] > middle) && (j > left))
		{
			j--;
		}
		if (i <= j)
		{
			iTemp = array[i];
			array[i] = array[j];
			array[j] = iTemp;
			j++;
			i--;
		}
	} while (i <= j);
	if (left < j)
	{
		CeleritryRun(left, j, array);
	}
	if (right > i)
	{
		CeleritryRun(i, right, array);
	}
}