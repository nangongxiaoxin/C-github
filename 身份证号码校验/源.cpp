#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[17] = { 0 };
	int c;
	int sum = 0;
	printf("请输入身份证号码:");
	for (int i = 0; ((c = getchar()) != '\n') && i <= 16; i++)
	{
		a[i] = c - '0';
	}
	printf("你输入需要校验的身份证号码前17位为:");
	for (int i = 0; i <= 16; i++)
	{
		printf("%d", a[i]);
	}
	a[0] = a[0] * 7;
	a[1] = a[1] * 9;
	a[2] = a[2] * 10;
	a[3] = a[3] * 5;
	a[4] = a[4] * 8;
	a[5] = a[5] * 4;
	a[6] = a[6] * 2;
	a[7] = a[7] * 1;
	a[8] = a[8] * 6;
	a[9] = a[9] * 3;
	a[10] = a[10] * 7;
	a[11] = a[11] * 9;
	a[12] = a[12] * 10;
	a[13] = a[13] * 5;
	a[14] = a[14] * 8;
	a[15] = a[15] * 4;
	a[16] = a[16] * 2;
	for (int i = 0; i <= 16; i++)
	{
		sum = sum + a[i];
	}
	int t = sum % 11;
	int r = (12 - t) % 11;
	if (r == 10)
	{
		printf("\n校验码为:X");
	}
	else
	{
		printf("\n校验码为:%d\n\n\n", r);
	}
	system("pause");
	return 0;
}