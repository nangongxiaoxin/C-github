#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int a[10];
	int iTemp, iPos;
	printf("Ϊ����Ԫ�ظ�ֵ\n");

	for (i = 0; i < 10; i++)
	{
		printf("a[%d]:",i);
		scanf_s("%d", &a[i]);
	}

	for (i = 1; i < 10; i++)
	{
		iTemp = a[i];
		iPos = i - 1;
		while ((iPos >= 0) && (iTemp < a[iPos]))
		{
			a[iPos + 1] = a[iPos];
			iPos--;
		}
		a[iPos + 1] = iTemp;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
		if (i == 4)
		{
			printf("\n");
		}
	}
	printf("\n");
	system("pause");
	return 0;
}