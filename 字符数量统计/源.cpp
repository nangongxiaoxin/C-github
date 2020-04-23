#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0, d = 0, e = 0;
	char c;
	while ((c=getchar())!='\n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			a++;
		}
		else if(c >= '0' && c <= '9')
		{
			b++;
		}
		else if(c == ' ' )
		{
			d++;
		}
		else
		{
			e++;
		}
	}
	printf("字母数：%d\n数字数：%d\n空格数：%d\n其他字符数：%d\n", a, b, d, e);

	system("pause");
	return 0;
}