#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=0,y=0;
	printf("������ѧ���ɼ�:");
	scanf_s("%d",&x);
	x /= 10;
	y = (int)x;
	if (x == 10)
		printf("ѧ���ɼ�ΪA��");
	else if (y < 10 && y>0)
	{
		switch (y)
		{
			case 9:
			{
			printf("ѧ���ɼ�ΪA��");
			break;
			}
			case 8:
			{
				printf("ѧ���ɼ�ΪB��");
				break;
			}
			case 7:
			{
				printf("ѧ���ɼ�ΪC��");
				break;
			}
			case 6:
			{
				printf("ѧ���ɼ�ΪD��");
				break;
			}
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:
			{
				printf("ѧ���ɼ�ΪE��");
				break;
			}
		
		}
	}
	else if (x > 10)
	{
		printf("�����ѧ���ɼ�ӦΪ0��100");
	}
	
	return 0;
	system("pause");
}