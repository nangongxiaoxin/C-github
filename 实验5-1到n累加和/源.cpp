#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n, a = 0;
	printf("��������n��ֵ:\n");
	scanf_s("%d", &n);
	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			a = i + a;
		}
		printf("1��%d���ۼӺ�Ϊ��%d\n", n, a);
	}
	else
	{
		printf("�������\n");
	}

	system("pause");
	return 0;
}