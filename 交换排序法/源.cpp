#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	int a[5];
	int iTemp;
	printf("�����뽫Ҫ�����5������\n");
	for (i = 0; i < 5; i++)
	{
		printf("a[%d]:", i);
		scanf_s("%d", &a[i]);
		printf("\n");
	}
	for (i = 0; i < 4; i++)						//�����±�
	{
		for (j = i + 1; j < 5; j++)
		{
			if (a[j] < a[i])					//�Ӱ�a[i]����һ������ʼ��a[i]�Ƚϣ��������if�� ���� ֵ
			{									//����ѡ��δ��������С��ֵ
				iTemp = a[i];
				a[i] = a[j];
				a[j] = iTemp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf(" %d", a[i]);
		if (i == 4)
		{
			printf("\n");
		}
	}
	
	system("pause");
	return 0;
}