#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 20; j++)
		{
			if (i == 2)
			{
				printf("*");
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}

	return 0;
	system("pause");
}