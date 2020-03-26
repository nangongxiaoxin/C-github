#include<stdio.h>
#include<stdlib.h>
void AddOne()
{
	auto int iInt1 = 1;//iInt1从第二次调用开始被多次声明（多次更新数值）
	iInt1 = iInt1 + 1;
	printf("%d\n", iInt1);
}
int main()
{
	printf("第一次调用：");
	AddOne();
	printf("第二次调用：");
	AddOne();
	printf("第三次调用：");
	AddOne();
	printf("第四次调用：");
	AddOne();
	return 0;
	system("pause");

}