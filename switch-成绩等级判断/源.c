#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=0,y=0;
	printf("请输入学生成绩:");
	scanf_s("%d",&x);
	x /= 10;
	y = (int)x;
	if (x == 10)
		printf("学生成绩为A等");
	else if (y < 10 && y>0)
	{
		switch (y)
		{
			case 9:
			{
			printf("学生成绩为A等");
			break;
			}
			case 8:
			{
				printf("学生成绩为B等");
				break;
			}
			case 7:
			{
				printf("学生成绩为C等");
				break;
			}
			case 6:
			{
				printf("学生成绩为D等");
				break;
			}
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:
			{
				printf("学生成绩为E等");
				break;
			}
		
		}
	}
	else if (x > 10)
	{
		printf("输入的学生成绩应为0至100");
	}
	
	return 0;
	system("pause");
}