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
	printf("������Բ������İ뾶\n");
	scanf_s("%lf", &fRadius);
	printf("������Բ���ĸ�\n");
	scanf_s("%lf", &fHigh);

	fPerimeter = 2 * PAI * fRadius;
	printf("Բ��������ܳ���%.2f\n", fPerimeter);

	fResult = fRadius * fRadius * PAI;
	printf("Բ������������%.2f\n", fResult);

	fVolume = fResult * fHigh;
	printf("Բ���������%.2f\n", fVolume);

	system("pause");
	return 0;

}