#include<stdio.h>
#include<stdlib.h>


int main()
{
    char c1, c2;
    c1 = getchar();
    c2 = getchar();
    putchar(c1);
    printf("\n");
    printf("%c", c2);
    printf("\n");
    system("pause");
    return 0;
}