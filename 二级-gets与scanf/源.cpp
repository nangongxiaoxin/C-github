#include <stdio.h>
#include <stdlib.h>
int main() {
	char b[3][10];
	int i;
	for (i = 0; i < 2; i++) {
		scanf_s("%s", b[i],5);
	}
	gets_s(b[2]);
	printf("%s%s%s\n", b[0],b[1],b[2]);
	system("pause");
	return 0;
}