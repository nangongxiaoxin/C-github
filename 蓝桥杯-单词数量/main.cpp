#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int wordNumber() {
	int i=0,n=0;
	char s[100];
	gets_s(s);
	for (; i < 100; i++) {
		if ((s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') && (s[i + 1] == ' ' || s[i + 1] == '\0')) {
			n++;
		}
	}
	return n;
}
int main() {
	int sum;
	int wordNumber();
	sum = wordNumber();
	cout << "单词数量为：" << sum << "个" << endl;
}