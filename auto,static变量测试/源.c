#include<stdio.h>
#include<stdlib.h>
void AddOne()
{
	auto int iInt = 1;
	iInt = iInt + 1;
	printf("%d\n", iInt);

}
int main()
{
	printf("��һ�ε��ã�");
	AddOne();
	printf("�ڶ��ε��ã�");
	AddOne();
	return 0;
	system("pause");
}