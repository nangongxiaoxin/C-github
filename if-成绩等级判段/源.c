#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 0;
	printf("������ѧ���ɼ�");
	scanf_s("%d", &x);
	if (x >= 90)
		printf("��ѧ���ĳɼ�ΪA��");
	else if (x >= 80 && x <= 89)
		printf("��ѧ���ĳɼ�ΪB��");
	else if (x >= 70 && x <= 79)
		printf("��ѧ���ĳɼ�ΪC��");
	else if (x >= 60 && x <= 69)
		printf("��ѧ���ĳɼ�ΪD��");
	else if (x <= 60)
		printf("��ѧ���ĳɼ�ΪE��");

	return 0;
	system("pause");
}