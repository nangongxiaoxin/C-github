#include<stdio.h>
#include<stdlib.h>
int main()
{
	int age(int n);
	printf("第5个学生得年龄是：%d", age(5));
	
	system("pause");
	return 0;
}

int age(int n)      //使用main函数中age(5),n=5递减运算，当n==1开始返回c的值
{
	int c;
	if (n == 1)
	{
		c = 10;
	}
	else
	{
		c = age(n - 1) + 2; //age(1)=10,后面的age调用上一个age的值
	}
	return c;
}