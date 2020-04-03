#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 0;
	printf("请输入学生成绩");
	scanf_s("%d", &x);
	if (x >= 90)
		printf("该学生的成绩为A等");
	else if (x >= 80 && x <= 89)
		printf("该学生的成绩为B等");
	else if (x >= 70 && x <= 79)
		printf("该学生的成绩为C等");
	else if (x >= 60 && x <= 69)
		printf("该学生的成绩为D等");
	else if (x <= 60)
		printf("该学生的成绩为E等");

	return 0;
	system("pause");
}