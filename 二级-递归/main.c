#include <stdio.h>
long fun(int i){
    if(i>1){
        return(i*fun(i-1));
    }
    return 1;
}
int main(){
    printf("10!=%ld\n",fun(10));//套娃之递归函数
} 