#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a,b;
	int f[10];
	printf("������10����Ҫ���������\n");
	for (a = 0; a < 10; a++)
	{
		scanf_s("%d", &f[a]);
	}

	for (i = 0; i < 9; i++)           //����10����������9��ѭ���Ƚϴ�С
	{
		for (a = 0; a < 9 - i; a++)   //��i��ѭ�����Ƚ�9-i��
		{
			if (f[a] > f[a + 1])      //�Ƚ������������Ĵ�С�������Ƿ񽻻�λ��
			{
				b = f[a];
				f[a] = f[a + 1];
				f[a + 1] = f[a];
			}
		}
	}
	printf("��������Ϊ��\n");
	for (a = 0; a < 10; a++)
	{
		printf(" %d", f[a]);
	}
	printf("\n");
	return 0;
	system("pause");
}