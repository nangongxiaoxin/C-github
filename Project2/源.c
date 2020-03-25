#include<stdio.h>
#include<stdlib.h>
#define PAI 3.14
int main()
{
	double fRadius;
	double fHigh;
	double fPerimeter = 0;
	double fResult = 0;
	double fVolume = 0;
	printf("请输入圆柱底面的半径\n");
	scanf_s("%lf", &fRadius);
	printf("请输入圆柱的高\n");
	scanf_s("%lf", &fHigh);

	fPerimeter = 2 * PAI * fRadius;
	printf("圆柱底面的周长：%.2f\n", fPerimeter);

	fResult = fRadius * fRadius * PAI;
	printf("圆柱底面的面积：%.2f\n", fResult);

	fVolume = fResult * fHigh;
	printf("圆柱的体积：%.2f\n", fVolume);

	system("pause");
	return 0;

}