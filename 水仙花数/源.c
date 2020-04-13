#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d;
	printf("水仙花数为:\n");
	for (a = 100; a <1000; a++)
	{
		b = a / 100;										//百位为几
		c = (a - b * 100) / 10;								//十位为几
		d = a % 10;											//个位为几(除以10取余数)
		if (a == b * b * b + c * c * c + d * d * d)			//判断个位十位百位的立方和与拆分前的数是否相等
			printf("%d  ", a);
	}
	printf("\n");

	system("pause");
	return 0;
}