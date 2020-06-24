#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n, k, i, m = 0,p=1,sum=0;
	int x[1000] = { 0 };
	for (n = 201; n <= 1000; n = n + 2)
	{
		k = sqrt(n);
		for (i = 2; i <= k; i++)
		{
			if (n % i == 0)break;
		}
		if (i >= k + 1)
		{
				x[m++] = n;
				p++;
		}
	}
	for (int a = 0; a <= p-2; a++)
	{
		if (x[a + 1] - x[a]==2)
		{
			sum++;
		}	
	}
	printf("双胞胎数一共有：%d\n",sum);
	system("pause");
	return 0;
}