#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[2][3] = { {1,2,3},{4,5,6} };
	int b[3][2], i, j;
	printf("a:\n");
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];  //ʹ��for��a�����е�ÿ��ֵ���������ŵ�b������
		}
		printf("\n");
	}
	printf("b:\n");
	for (j = 0; j <= 2; j++)   //forѭ����ij��Ϊ��ʹ��ά�����е�ÿһ��ֵ��Ч�����
	{
		for (i = 0; i <= 1; i++)
		{
			printf("%5d", b[j][i]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}