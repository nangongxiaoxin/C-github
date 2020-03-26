#include<stdio.h>
#include<stdlib.h>
void AddOne()
{
	static int iInt2 = 10;//static仅在初次声明时有效
	iInt2 = iInt2 + 1;
	printf("%d\n", iInt2);

}
int main()
{
	printf("第五次调用：");
	AddOne();
	printf("第六次调用：");
	AddOne();
	printf("第七次调用：");
	AddOne();
	printf("第八次调用：");
	AddOne();
	printf("第九次调用：");
	AddOne();
	printf("第十次调用：");
	AddOne();
	printf("第十一次调用：");
	AddOne();
	printf("第十二次调用：");
	AddOne();
	system("pause");
	return 0;
}