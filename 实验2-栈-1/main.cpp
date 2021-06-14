#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define STACK_INIT_SIZE 100
#define STACKSIZE 10
#define OK 1
typedef char SElemType;
typedef char ElemType;
using namespace std;

char numToChar(int n);

char T;

typedef struct
{
    SElemType *base;
    SElemType *top;
    int stacksize;
} SqStack;

//初始化
int InitStack(SqStack &S)
{
    S.base = (ElemType *)malloc(STACK_INIT_SIZE * sizeof(ElemType));
    //是否申请成功
    if (!S.base)
    {
        exit(0);
    }
    //空栈的标志，栈顶等于栈底
    S.top = S.base;
    S.stacksize = STACK_INIT_SIZE;
    return OK;
}

char Push(SqStack &S, int n)
{
    //栈满后追加空间
    if (S.top - S.base >= S.stacksize)
    {
        S.base = (ElemType *)realloc(S.base, (S.stacksize + STACKSIZE) * sizeof(ElemType));
        if (!S.base)
        {
            exit(0);
        }

        S.top = S.base + S.stacksize;
        S.stacksize = S.stacksize + STACKSIZE;
    }
    if (n >= 10 && n <= 15)
    {
        n = numToChar(n);
    }

    *S.top++ = (char)(48 + n); //栈中存的是数字对应的ASCII码
    return OK;
}

int Stackempty(SqStack &S)
{
    if (S.top == S.base)
    {
        return 0;
    }
    return OK;
}

char Pop(SqStack &S, ElemType &e)
{
    //若栈不是空，删除S的栈顶元素
    //否则返回0
    if (S.top == S.base)
    {
        return 0;
    }
    //S.top的上一个位置储存着最后一个元素
    e = *--S.top;
    return e;
}

//大于等于10的数字处理
char numToChar(int n)
{
    if (n >= 10 && n <= 15)
    {
        return n - 58 + 'A'; //由于在numToChar中数字转ascii的影响所以需要处理
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    int a;
    char e;
    SqStack s;
    InitStack(s);

    cout << "输入一个10进制数字：";
    scanf("%d", &n);
    cout << "输入目标进制：";
    scanf("%d", &a);

    while (n)
    {
        Push(s, n % a);
        n = n / a;
    }
    while (Stackempty(s))
    {
        Pop(s, e);
        cout << e;
    }
    printf("\n");
    return 0;
}