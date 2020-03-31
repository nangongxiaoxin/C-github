#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	int y=0;
	printf("请输入x的值:");
	scanf_s("%d",&x);
	
	if (-5 < x && x < 5)
	{
		if (-5 < x && x < 0)  y = x;
		if (0 < x && x < 5) y = x + 1;
		{
			printf("y=%d\n", y);
		}
	}
	else
	{
		if (x == 0) y = x - 1;
		{
			printf("y=%d\n", y);
		}
	}
	system("pause");
	return 0;
}
//if嵌套语句在《c语言从如门到精通第四版》108页