extern A;

int power(int n)
{
	int i, y=1;
	for (i = 1; i <= n; i++)
	{
		y *= A;
	}
	return(y);
}
//cpp与c不同，注意文件后缀