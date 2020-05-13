#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int sales, n = 0;
	double s = 0;
	scanf_s("%d", &sales);
	if (sales >= 50000)
	{
		n = 1;
	}
	else if (sales >= 30000 && sales < 50000)
	{
		n = 2;
	}
	else if (sales > 30000 && sales <= 10000)
	{
		n = 3;
	}
	else
	{
		n = 4;
	}
	switch (n)
	{
	case 1:s = 380 + sales * 0.16;
		break;
	case 2:s = 320 + sales * 0.12;
		break;
	case 3:s = 260 + sales * 0.07;
		break;
	default:s = 200 + sales * 0.03;
		break;
	}
	printf("¹¤×ÊÊÇ£º%f\n", s);
	system("pause");
	return 0;
}
