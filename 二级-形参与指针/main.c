#include <stdio.h>
int *f(int *s,int *t){
    if(*s<*t){
        *s=*t;
    }
    return s;
}
int main(){
    int i=3,j=5,*p=&i,*q=&j,*r;
    r=f(p,q);
    printf("%d,%d,%d,%d,%d\n",i,j,*p,*q,*r);
}