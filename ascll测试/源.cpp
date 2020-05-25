#include <stdio.h>
#include <ctype.h> //内置函数头文件

int main()
{
    //常用内置函数 - 0 表示假 非0表示真
    printf("%d\n", isupper('a'));//判断是否是大写字母
    printf("%d\n", islower('a')); //判断是否是小写字母
    printf("%d\n", isalpha('a')); //返回的值是否为字母
    printf("%d\n", isdigit('8')); //判断传入的是不是一个数字
    //如果传入的时数字表示的是ascii码

    //打印出来所有的ascii码 共127个
    int i;
    for (i = 0; i < 127; i++)
    {
        printf("%c,", i);
    }
    return 0;
}