#include <stdio.h>
int main(){
    int a,b;
    for(a=0;a<3;a++){
        scanf("%d",&b);
        switch(b){
            case 1:printf("%d,",b++);
            case 2:printf("%d,",b++);
            default:printf("%d,",b++);
        }
    }
    printf("\n");
}