#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
typedef char Elemtype;
//定义结构体
typedef struct Node
{
    struct Node *next;
    char data;
} * LinkList;
//头插法创建
Node *Creat_L(LinkList &L, int n)
{
    L = (Node *)malloc(sizeof(Node)); //初始化头节点，头节点不保存数据
    (L->next) = NULL;                 //让其下一个指向空
    LinkList m = L;                   //创建一个新节点来保存头节点位置，目的是让头节点保持不动
    char e;
    for (int i = 0; i < n; i++)
    {
        LinkList p = (LinkList)malloc(sizeof(Node)); //创建新节点
        cout << "请输入第" << i + 1 << "个节点的数据:";
        cin >> e; //也可以写成c的输入函数语句    scanf("%c",&e);
        (p->data) = e;
        (p->next) = m->next; //让新节点下一个指向头节点下一个，
        m->next = p;
        m = p;
    }
    return L;
}
//打印输出
void Pr(LinkList head)
{
    if (head == NULL)
        return;
    Node *p = head->next; //头节点无数据，故从头节点的下一个节点开始遍历
    while (p != NULL)     //遍历链表
    {
        cout << (char)(p->data) << "->";
        p = p->next;
    }
    printf("NULL\n");
}
//插入
void Insit_Node(LinkList head)
{
    int pos; //pos表示插入位置
    cout << "请输入插入的位置，起始位置从1开始:";
    cin >> pos;
    LinkList p = head;
    char e;
    //头插
    if (pos < 2)
    {
        Node *pnew = (Node *)malloc(sizeof(Node));
        cout << "请输入插入的元素值:";
        cin >> e; //也可以写成c的输入函数语句    scanf("%c",&e);
        pnew->data = e;
        pnew->next = p->next;
        p->next = pnew;
    }
    else
    {
        int i = 0;
        for (; i < pos - 1; i++) //遍历到需要插入位置的前一个位置停下
            p = p->next;
        Node *pnew = (Node *)malloc(sizeof(Node));
        printf("请输入插入的元素值:");
        cin >> (pnew->data); //也可以写成c的输入函数语句    scanf("%c",&e);
        pnew->next = p->next;
        p->next = pnew;
    }
}
//删除
void Del_Node(LinkList head)
{
    //头删
    int pos; //pos表示删除位置
    cout << "请输入删除的位置，起始位置从1开始：";
    cin >> pos;
    Node *p = head;
    if (pos < 2)
    {
        Node *m = p->next;
        p->next = m->next;
        free(m);
    }
    else
    {
        int i = 0;
        for (; i < pos - 1; i++) //遍历到需要删除的节点的前一个位置时停下
        {
            p = p->next;
        }
        Node *m = p->next;
        p->next = m->next;
        free(m); //释放要删除的节点，不会造成内存垃圾
    }
}
int main()
{
    LinkList head = NULL;

    int n;
    cout << "输入即将输入的字符个数：";
    cin >> n;

    head = Creat_L(head, n);
    Pr(head);
    Insit_Node(head);
    Pr(head);
    Del_Node(head);
    Pr(head);
    return 0;
}