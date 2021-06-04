#include<iostream>
#include<algorithm>
using namespace std;
int ans;
int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}
int main() {
	for (int i = 1; i <= 2020; i++) {
		for (int j = 1; j <= 2020; j++) {
			if (gcd(i, j) == 1) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
