#include<stdio.h>
#include<stdlib.h>
int main()
{
	char num[10][10];
	char name[10][10];
	float score[10];
	int a;
	printf("请输入即将输入的学生人数：");
	scanf_s("%d", &a);//             
	for (int i = 0; i < a; i++)
	{
		printf("请输入第%d名学生的学号:", i + 1);
		scanf_s("%s", &num[i], 10);
		printf("请输入第%d名学生的姓名:", i + 1);
		scanf_s("%s", &name[i], 10);
		printf("请输入第%d名学生的学分:", i + 1);
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
		printf("学分较高的为：\n");
		printf("学号\t姓名\t学分\n");
		printf("%s\t%s\t%.2f\n", num[a], name[a], score[a]);
	}
	system("pause");
	return 0;
}