#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j ,iTemp;
	int a[5];
	for (i = 0; i < 5; i++)
	{
		printf("����a[%d]������",i);
		scanf_s("%d", &a[i]);
		printf("\n");
	}
	for (i = 1; i < 5; i++)					//i����ÿ���ڲ� for����󣬴�a[0]��a[i]���Ѿ�ɸѡ������С������
	{
		for (j = 4; j >= i; j--)			//j>=iָ����j��>=iʱӦ�þ���for�����ѭ��
		{
			if (a[j] < a[j - 1])			//ʼ�ձ��ֺ�һ����С��ǰһ����
			{
				iTemp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = iTemp;
			}
		}
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