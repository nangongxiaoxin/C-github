#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x=0;
	char y;
	float z=0;
	
	printf("�����ַ���:");
	scanf_s("%c", &y);

	printf("��������:");
	scanf_s("%d",&x);
	
	printf("���븡����:");
	scanf_s("%f",&z);
	
	printf("x=%5d\n", x);
	printf("y=%3c\n",y);
	printf("z=%10.3f\n",z);
	

	

	system("pause");
	return 0;
}

