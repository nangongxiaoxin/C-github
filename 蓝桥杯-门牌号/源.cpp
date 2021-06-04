#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int number() {
	int i,a,b,c,d;
	int flag=0;
	for (i = 1; i <= 2020;i++) {
		if (i < 10) {
			d = i;
			if (d == 2) {
				flag++;
			}
		}
		if (i >= 10 && i < 100) {
			c = i / 10;
			d = i % 10;
			if (c == 2) {
				flag++;
			}
			if (d == 2) {
				flag++;
			}
		}
		if (i >= 100 && i < 1000) {
			b = i / 100;
			c = i / 10 % 10;
			d = i % 10;
			if (b==2) {
				flag++;
			}
			if (c == 2) {
				flag++;
			}
			if (d == 2) {
				flag++;
			}
		}
		if (i >= 1000 && i < 10000) {
			a = i / 1000;
			b = i / 100 % 10;
			c = i / 10 % 10;
			d = i % 10;
			if (a==2) {
				flag++;
			}
			if (b == 2) {
				flag++;
			}
			if (c == 2) {
				flag++;
			}
			if (d == 2) {
				flag++;
			}
		}
	}
	return flag;
}
int main() {
	int number();
	cout << number() << endl;
}