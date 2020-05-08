#include<stdio.h>
#include<stdlib.h>
float Max, Min;
int main()
{
	float average(float x[], int n);
	float ave;
	float ach[10];
	int i;
	for (i = 0 ; i <= 9 ; i++)
	{
		printf("请输入第%d次的成绩：",i+1);
		scanf_s("%f", &ach[i]);
	}
	ave = average(ach, 10);
	printf("--------------------\n");
	printf("    Max=%5.2f\n    Min=%5.2f\nAverage=%5.2f\n",Max,Min,ave);
	system("pause");
	return 0;
}
float average(float x[], int n)
{
	int a;
	float aver, sum=0;
	Max = Min = x[0];
	for (a = 0; a < n; a++)
	{
		if (x[a] >= Max)
		{
			Max = x[a];
		}
		else if(x[a]<Min)
		{
			Min = x[a];
		}
		sum = sum + x[a];
	}
	aver = sum / n;
	return (aver);
}