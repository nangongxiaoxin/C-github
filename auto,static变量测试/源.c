#include<stdio.h>
#include<stdlib.h>
void AddOne()
{
	auto int iInt1 = 1;//iInt1�ӵڶ��ε��ÿ�ʼ�������������θ�����ֵ��
	iInt1 = iInt1 + 1;
	printf("%d\n", iInt1);
}
int main()
{
	printf("��һ�ε��ã�");
	AddOne();
	printf("�ڶ��ε��ã�");
	AddOne();
	printf("�����ε��ã�");
	AddOne();
	printf("���Ĵε��ã�");
	AddOne();
	return 0;
	system("pause");

}