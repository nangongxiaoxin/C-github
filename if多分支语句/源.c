#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	int y = 0;
	printf("ÇëÊäÈëxµÄÖµ:");
	scanf_s("%d", &x);

	if (-5 < x && x < 0) y = x;
	else if (x == 0)
	{
		y = x - 1;
	}
	else if (0 < x && x < 5)
	{
		y = x + 1;
	}
	printf("y=%d\n", y);
	system("pause");
	return 0;
}

