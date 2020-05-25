#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[8];
	int i,j,b,c;
	printf("ÊäÈë8¸öÊı:\n");
	for (int i = 0; i < 8; i++)
	{
		printf("a[%d]:", i);
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 8; i++)
	{
		b = a[i];
		c = i;
		for (j = i + 1; j < 8; j++)
		{
			if (a[j] < b)
			{
				b = a[j];
				c = j;
			}
		}
		a[c] = a[i];
		a[i] = b;
	}
	for (i = 0; i < 8; i++)
	{
		printf("%d\t", a[i]);
		if (i == 3)
		{
			printf("\n");
		}
	}


	printf("\n");
	system("pause");
	return 0;
} 