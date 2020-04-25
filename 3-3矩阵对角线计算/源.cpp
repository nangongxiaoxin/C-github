#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int b, c;
	for (b = 0; b < 3; b++)
	{
		for (c = 0; c < 3; c++)
		{
			printf(" %d",a[b][c]);
		}
		printf("\n");
	}
	printf("对角线之和为：%d\n", a[0][0] + a[0][2] + a[1][1] + a[2][0] + a[2][2]);
	system("pause");
	return 0;
}