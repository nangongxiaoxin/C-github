#include<stdio.h>
#include<stdlib.h>
void AddOne()
{
	static int iInt2 = 10;//static���ڳ�������ʱ��Ч
	iInt2 = iInt2 + 1;
	printf("%d\n", iInt2);

}
int main()
{
	printf("����ε��ã�");
	AddOne();
	printf("�����ε��ã�");
	AddOne();
	printf("���ߴε��ã�");
	AddOne();
	printf("�ڰ˴ε��ã�");
	AddOne();
	printf("�ھŴε��ã�");
	AddOne();
	printf("��ʮ�ε��ã�");
	AddOne();
	printf("��ʮһ�ε��ã�");
	AddOne();
	printf("��ʮ���ε��ã�");
	AddOne();
	system("pause");
	return 0;
}