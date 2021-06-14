#include <stdio.h>
int a=2;
static int b=5;
#define N 8
main(){
    static int a=9;
    printf("%d",a);
} 