#include<stdio.h>
#include<stdlib.h>
int main()
{
	char num[10][10];
	char name[10][10];
	float score[10];
	int a;
	printf("�����뼴�������ѧ��������");
	scanf_s("%d", &a);//             
	for (int i = 0; i < a; i++)
	{
		printf("�������%d��ѧ����ѧ��:", i + 1);
		scanf_s("%s", &num[i], 10);
		printf("�������%d��ѧ��������:", i + 1);
		scanf_s("%s", &name[i], 10);
		printf("�������%d��ѧ����ѧ��:", i + 1);
		scanf_s("%f", &score[i], 10);
	}
	for (int i = 0; i < a; i++)
	{
		if (score[i] > score[i + 1])
		{
			a = i;
		}
		else
		{
			a = i + 1;
		}
		printf("-------------------------\n");
		printf("ѧ�ֽϸߵ�Ϊ��\n");
		printf("ѧ��\t����\tѧ��\n");
		printf("%s\t%s\t%.2f\n", num[a], name[a], score[a]);
	}
	system("pause");
	return 0;
}