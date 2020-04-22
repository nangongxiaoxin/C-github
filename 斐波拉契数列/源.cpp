#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f1=1, f2=1;
	int i;
	for(i=1;i<=5;i++)
	{
		printf("%4d\n%4d\n", f1, f2);
		//if (i % 2 == 0)printf("\n");
		f1 = f1 + f2;
		f2 = f2 + f1;
	}

	printf("\n");

	system("pause");
	return 0;
}