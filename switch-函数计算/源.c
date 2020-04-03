#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c,x,y;
	y = 0;
	c = 0;
	printf("请输入x的值:");
	scanf_s("%d",&x);
	if (x > -5 && 0 > x)
	{
		c = 1;
	}
	if (x == 0)
	{
		c = 2;
	}
	if (x > 0 && x < 5)
	{
		c = 3;
	}
	switch (c)
	{
	case 1:
		{
			printf("y的值为：%d",y = x);
			break;
		}
	case 2:
		{
			printf("y的值为：%d",y=x-1);
			break;
		}
	case 3:
		{
			printf("y的值为：%d",y=x+1);
			break;
		}
	default:
		{
		printf("请输入大于-5小于5的整数");
		break;
		}
	}
	return 0;
	system("pause");
}
