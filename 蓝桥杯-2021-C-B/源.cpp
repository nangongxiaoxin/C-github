#include<stdio.h>
#include<iostream>
using namespace std;
int cnt[10];
int main() {
	int n = 2021, i, x, k = 1,a=1;
	for (i = 0; i < 10; i++)cnt[i] = n;
	while (1) {
		x = k;
		while (x) {
			if (cnt[x % 10] > 0)cnt[x % 10]--, x /= 10,a++;//判断条件为数组大于0 每次从后向前分解一个数字，并将其再数组中减去对应的数字
			else break;
		}
		if (x)
		{
			break;//当0-9任意一个数字用完时，x便不为0，就break弹出外层while
		}
		else k++;
	}
	//当2021个数字可以组成多少个数字
	cout << k - 1 << endl;//由于在最后一次的判定前的k++影响(if中数组是否为0)所以需要减去多余的1次
	return 0;
}
