#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d, e;
	printf("ˮ�ɻ���Ϊ:");
	for (a = 1000; a < 10000; a++)
	{
		b = a / 1000;																	//ǧλΪ��
		c = (a - b * 1000) / 100;														//��λΪ��
		e = (a - b * 1000 - c * 100) / 10;												//ʮλΪ��
		d = a % 10;																		//��λΪ��(����10ȡ����)
		if (a == b * b * b * b + c * c * c * c + d * d * d * d + e * e * e * e)			//�жϸ�λʮλ��λ������������ǰ�����Ƿ����
			printf("%d  ", a);
	}
	printf("\n");

	system("pause");
	return 0;
}