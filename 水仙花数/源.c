#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d;
	printf("ˮ�ɻ���Ϊ:\n");
	for (a = 100; a <1000; a++)
	{
		b = a / 100;										//��λΪ��
		c = (a - b * 100) / 10;								//ʮλΪ��
		d = a % 10;											//��λΪ��(����10ȡ����)
		if (a == b * b * b + c * c * c + d * d * d)			//�жϸ�λʮλ��λ������������ǰ�����Ƿ����
			printf("%d  ", a);
	}
	printf("\n");

	system("pause");
	return 0;
}