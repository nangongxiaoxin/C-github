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
			if (cnt[x % 10] > 0)cnt[x % 10]--, x /= 10,a++;//�ж�����Ϊ�������0 ÿ�δӺ���ǰ�ֽ�һ�����֣��������������м�ȥ��Ӧ������
			else break;
		}
		if (x)
		{
			break;//��0-9����һ����������ʱ��x�㲻Ϊ0����break�������while
		}
		else k++;
	}
	//��2021�����ֿ�����ɶ��ٸ�����
	cout << k - 1 << endl;//���������һ�ε��ж�ǰ��k++Ӱ��(if�������Ƿ�Ϊ0)������Ҫ��ȥ�����1��
	return 0;
}
