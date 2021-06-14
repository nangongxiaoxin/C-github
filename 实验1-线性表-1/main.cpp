#include <stdio.h>
#include <stdlib.h>

#define LIST_INIT_SIZE 4
#define LISTMORESIZE 4
#define ERROR 0
#define OK 1

//定义线性表结构体
typedef struct SqList
{
    char *elem;
    int len;
    int size;
};

//初始化线性表
int InitList_SqList(struct SqList *L)
{
    //使用malloc函数申请空间;为L指向的elem分配
    L->elem = (char *)malloc(LIST_INIT_SIZE * sizeof(int));
    if (!L->elem)
    {
        //如果L->elem(L->elem为空即0)异常就退出(空间申请失败)
        exit(0);
    }
    //初始条件下，len为0
    L->len = 0;
    L->size = LIST_INIT_SIZE;
    //函数有返回值
    return 0;
}

//向线性表中插入数据
int ListInsert_SqList(struct SqList *L, int i, int e)
{
    if (i < 1 || i > L->len + 1)
    {
        return ERROR;
    }
    //空间判断
    if (L->len >= L->size)
    {
        //如果L->len的空间大于L->size的空间就使用realloc函数申请更多的空间
        int *newbase = (int *)realloc(L->elem, (LIST_INIT_SIZE + LISTMORESIZE * sizeof(int)));
        //如果空间申请失败(newbase为0)
        if (!newbase)
        {
            exit(0);
        }
        //空间增加
        L->size += LISTMORESIZE;
    }
    //开始插入
    int *q = &L->elem[i - 1];
    int *p;
    //挪窝
    for (p = &L->elem[L->len - 1]; p >= q; --p) //p为插入元素后的位置？？？？？
    {
        *(p + 1) = *p; //插入位置的值从最后面开始后移，把*p的值传给*(p+1)
    }
    *q = e;   //链接插入后的位置
    ++L->len; //L的位置在插入后向后增加
    return OK;
}

//删除线性表中的数据
int ListDelete_SqList(struct SqList *L, int i, int *e)
{ //？？？？？
    //判空、判满
    if (i < 1 || i > L->len)
    {
        return ERROR;
    }
    int *p = &(L->elem[i - 1]);
    *e = *p;                       //*e？？？？？
    int q = *L->elem + L->len - 1; //确认删除片段后面的位置以确保移动数量
    for (++p; *p <= q; ++p)
    {
        *(p - 1) = *p;
    }
    L->len--;
    return OK;
}

//输出线性表中的数据
int ListShow_SqList(struct SqList *L, char *s)
{
    printf("%s", s);
    for (int i = 0; i < L->len; i++)
    {
        printf("%d ", L->elem[i]);
    }
    printf("\n"); //或者putchar('\n')
}

//无返回主函数？？？？？
int main()
{
    int i, sumNumber;
    //有线性表L
    struct SqList L;
    //初始化线性表
    InitList_SqList(&L);

    //输入
    printf("预先输入的原始数据个数：");
    scanf("%d", &sumNumber);
    printf("请向线性表中输入%d个原始数据：", sumNumber);
    for (i = 0; i < sumNumber; i++)
    {
        int inNumber;
        scanf("%d", &inNumber);
        ListInsert_SqList(&L, L.len + 1, inNumber);
    }
    //输出
    ListShow_SqList(&L, (char *)"原始数据为：");

    //定义插入/删除时的位置参数和数值参数
    int s, v;

    //插入操作
    printf("请输入数据插入时的位置 s 和数值 v ：");
    scanf("%d%d", &s, &v);
    printf("%s", ListInsert_SqList(&L, s, v) ? "插入成功\n" : "插入失败\n");
    ListShow_SqList(&L, (char *)"插入后为：");

    //删除操作
    printf("请输入数据删除的位置 s ：");
    scanf("%d", &s);
    if (ListDelete_SqList(&L, s, &v))
    { //？？？？？
        printf("删除数据： %d 成功\n", v);
    }
    else
    {
        printf("删除数据： %d 失败，可能位置错误\n", v);
    }
    ListShow_SqList(&L, (char *)"删除后为：");

    system("pause");
}