#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d;
	printf("������һ��3λ������");
	scanf_s("%d", &a);
	if (a > 99 && a < 1000)
	{
		b = a / 100;
		c = (a - b * 100) / 10;
		d = a - b * 100 - c * 10;
		printf("%d�İ�λΪ��%d\n     ʮλΪ��%d\n     ��λΪ��%d\n", a, b, c, d);
	}
	else
	{
		printf("����ȷ����һ����λ����\n");
	}
	system("pause");
	return 0;
}