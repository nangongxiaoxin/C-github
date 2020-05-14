#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d, e;
	printf("四叶玫瑰数为:");
	for (a = 1000; a < 10000; a++)
	{
		b = a / 1000;																	//千位为几
		c = (a - b * 1000) / 100;														//百位为几
		e = (a - b * 1000 - c * 100) / 10;												//十位为几
		d = a % 10;																		//个位为几(除以10取余数)
		if (a == b * b * b * b + c * c * c * c + d * d * d * d + e * e * e * e)			//判断个位十位百位的立方和与拆分前的数是否相等
			printf("%d  ", a);
	}
	printf("\n");

	system("pause");
	return 0;
}
