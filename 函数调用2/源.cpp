#include<stdio.h>
#include<stdlib.h>
int main()
{
	int age(int n);
	printf("��5��ѧ���������ǣ�%d", age(5));
	
	system("pause");
	return 0;
}

int age(int n)      //ʹ��main������age(5),n=5�ݼ����㣬��n==1��ʼ����c��ֵ
{
	int c;
	if (n == 1)
	{
		c = 10;
	}
	else
	{
		c = age(n - 1) + 2; //age(1)=10,�����age������һ��age��ֵ
	}
	return c;
}