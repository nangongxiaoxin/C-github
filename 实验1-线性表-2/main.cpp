#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define OK 1
#define ERROR
using namespace std;
typedef char ElemType;

//定义结构体
typedef struct Node
{
    struct Node *next;
    ElemType data;
} Node, *LinkList;

Node *Creat_L(LinkList &L, int n)
{
    L = (Node *)malloc(sizeof(Node)); //初始化头结点，且头节点为空
    (L->next) = NULL;                 //L指向的下一个节点为空
    LinkList m = L;                   //创建新节点保存头节点
    char e;
    for (int i = 0; i < n; i++)
    {
        LinkList p = (LinkList)malloc(sizeof(Node)); //创建新节点
        printf("输入第%d个节点的值：", i + 1);
        //scanf("%c", &e);//scanf输入时由于空格会导致异常
        //cout << "请输入第" << i + 1 << "个节点的值";
        cin >> e;
        //getchar();
        (p->data) = e;
        (p->next) = m->next; //进行指针指向更改
        m->next = p;
        m = p;
    }
    return L;
}

//插入
void Insert_Node(LinkList head)
{
    int pos; //插入位置
    printf("输入插入位置：");
    scanf("%d", &pos);
    //cout << "请输入插入的位置，起始位置从1开始：";
    //cin >> pos;
    LinkList p = head;
    char e;

    //头部插入
    if (pos < 2)
    {
        Node *pnew = (Node *)malloc(sizeof(Node));
        printf("请输入需要插入的值：");
        scanf("%c", &e);
        //cout << "请输入插入的元素值：";
        //cin >> e;
        pnew->data = e;
        pnew->next = p->next;
        p->next = pnew;
    }
    //非头部
    else
    {
        int i = 0;
        for (; i < pos - 1; i++) //在需要插入的前一个位置停下
        {
            p = p->next;
        }
        Node *pnew = (Node *)malloc(sizeof(Node));
        printf("请输入插入的值：");
        //scanf("%c", &(pnew->data));
        cin >> (pnew->data);
        pnew->next = p->next;
        p->next = pnew;
    }
}

//删除
void Delete_Node(LinkList head, int num)
{
    int del;
    printf("请输入删除位置：");
    scanf("%d", &del);
    Node *p = head;
    if (del == 1)
    {
        Node *m;
        m = p->next;
        p->next = m->next;
        free(m);
    }
    if (del > num || del < 0)
    {
        return ERROR;
    }
    else
    {
        int i = 0;
        for (; i < del - 1; i++)
        {
            p = p->next;
        }
        Node *m = p->next;
        p->next = m->next;
        free(m);
    }
}

//输出
void Node_Show(LinkList head)
{
    if (head == NULL) //判空
    {
        return;
    }
    Node *p = head->next; //头结点无数据
    while (p != NULL)     //遍历链表
    {
        printf("%c->", p->data);
        //cout << (char)(p->data) << "->";
        p = p->next;
    }
    printf("null\n");
}

int main()
{
    int num;
    LinkList head = NULL;
    printf("输入数据长度：");
    scanf("%d", &num);
    head = Creat_L(head, num); //初始化

    Node_Show(head);
    Insert_Node(head);
    Node_Show(head);
    Delete_Node(head, num);
    Node_Show(head);
    return 0;
}
