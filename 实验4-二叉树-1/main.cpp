#include <stdio.h>
#include <iostream>
using namespace std;
typedef int TElemType;

typedef struct BiTNode
{
    TElemType date;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

BiTree Create(BiTree T)
{
    char ch;
    cin >> ch;
    if (ch == 'a')
    {
        //叶子节点
        return NULL;
    }
    else
    {
        T = (BiTree)malloc(sizeof(BiTNode));
        //赋值
        T->date = ch;
        //递归调用，开辟储存空间
        T->lchild = Create(T->lchild);
        T->rchild = Create(T->rchild);
    }
    return T;
}

//前序遍历
void PreOrder(BiTree T)
{
    if (T != NULL)
    {
        printf("%c ", T->date);
        //递归调用，进行遍历，遇空终止
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}

//中序遍历
void MidOrder(BiTree T)
{
    if (T != NULL)
    {
        MidOrder(T->lchild);
        printf("%c ", T->date);
        MidOrder(T->rchild);
    }
}

//后序遍历
void BackOrder(BiTree T)
{
    if (T != NULL)
    {
        BackOrder(T->lchild);

        BackOrder(T->rchild);
        printf("%c ", T->date);
    }
}

int main()
{
    BiTree T = NULL;
    T = Create(T);

    printf("前序遍历：\n");
    PreOrder(T);
    printf("\n");

    printf("中序遍历：\n");
    MidOrder(T);
    printf("\n");

    printf("后序遍历：\n");
    BackOrder(T);
    printf("\n");

    return 0;
}