#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 0 };
	int i, j = 4;
	for (i = 0; i < 5; i++)
	{
		b[j] = a[i];
		j--;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	system("pause");
	return 0;

}