#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int a[5];
	int iTemp;
	int iPos;
	printf("为数组元素赋值：\n");
	for (i = 0; i < 5; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
		printf("\n");
	}
	for (i = 1; i < 5; i++)
	{
		iTemp = a[i];
		iPos = i - 1;
		while ((iPos >= 0) && (iTemp < a[iPos]))
		{
			a[iPos + 1] = a[iTemp];
			iPos--;
		}
		a[iPos + 1] = iTemp;
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