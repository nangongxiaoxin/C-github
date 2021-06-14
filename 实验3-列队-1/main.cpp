#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define OVERFLOW 0
#define ERROR 0
#define OK 0
typedef int ET;

using namespace std;

int num;

//队列结点类型
typedef struct qnode
{
    int date;
    struct qnode *next;
} QNode;

//队列
typedef struct
{
    QNode *foront;
    QNode *rear;
} liqueue;

//初始化
void iNitQueue(liqueue *Q)
{
    // cout << "===========" << endl;
    //Q = (liqueue *)malloc(sizeof(liqueue));//空队
    Q->foront = Q->rear = (qnode *)malloc(sizeof(qnode));
    //Q->rear = (qnode *)malloc(sizeof(qnode));
    if (!Q->foront)
    {
        exit(0);
    }
    Q->foront->next = NULL;
}

//删除
int insertQu(liqueue &Q, int &e)
{
    int x;
    if (Q.foront == Q.rear)
    {
        return ERROR;
    }
    QNode *p;
    p = Q.foront->next;
    e = p->date;
    Q.foront->next = p->next;
    if (Q.foront == p)
    {
        Q.rear == Q.foront;
    }
    free(p);
    return OK;
}

//插入
void enQueue(liqueue &Q, int &e)
{
    //插入e
    QNode *p;

    p = (QNode *)malloc(sizeof(QNode));
    if (!p)
    {
        exit(OVERFLOW);
    }
    p->date = e;
    p->next = NULL;
    Q.rear->next = p;
    Q.rear = p;
    //cout << "test:" << Q.foront->date << endl;
}
//显示
void show(liqueue S)
{
    if ((S.foront->next) == NULL)
    {
        cout << "无人排队" << endl;
        exit(OVERFLOW);
    }
    do
    {
        cout << S.foront->next->date << "<-"; //front.front-date为空
        S.foront = S.foront->next;
    } while (S.foront->next != NULL);
    cout << "完" << endl;
    cout << "============" << endl;
}

//就诊
void seeDoctor(liqueue &Q)
{
    int x;
    if (Q.foront->next == NULL)
    {
        cout << "无人排队";
    }
    else
    {
        insertQu(Q, x);
        cout << "就诊者：" << x << endl;
        cout << "============" << endl;
        //cout << "下一个就诊的为：" << Q.foront->next->date << endl;
        //free(Q.foront->next);
        //Q.foront = Q.foront->next;
    }
}
int main()
{
    int e, c;
    liqueue *Q;
    liqueue *H;

    iNitQueue(Q);
    iNitQueue(H);

    int history[100];

    // cout << "初始排队人数：";
    // cin >> num;
    // while (num--)
    // {
    //     cout << "输入排队号：";
    //     cin >> e;
    //     enQueue(*Q, e);
    // }

    // show(*Q);
    // cout << "%%%%%%%%%%" << endl;
    // seeDoctor(*Q);
    // cout << "%%%%%%%%%%" << endl;
    // show(*Q);

    cout << "排队:1  就诊:2  查看排队:3  不在排队依次就诊:4  下班:5" << endl;
    cout << "你的选择是：";
    cin >> c;
    while (c == 1 || c == 2 || c == 3 || c == 4 || c == 5)
    {
        if (c == 5)
        {
            cout << "下班了@_@" << endl;
            //return 0;
            break;
        }
        else
        {
            switch (c)
            {
            case 1:
                cout << "初始排队人数：";
                cin >> num;
                while (num--)
                {
                    cout << "输入排队号：";
                    cin >> e;

                    // for (int i = num_t - num; i < num_t; i++)
                    // {
                    //     if (num > 0 || num >= 0)
                    //     {
                    //         history[i] = e;
                    //     }
                    // }

                    enQueue(*Q, e);
                    enQueue(*H, e);
                }
                break;

            case 2:
                seeDoctor(*Q);
                break;

            case 3:
                cout << "当前排队的人员有：" << endl;
                show(*Q);
                // cout << "完";
                // cout << "============" << endl;
                break;
            case 4:
                cout << "不再排队依次就诊，今日排队人员有：" << endl;
                show(*H);
                break;
            default: //可以不添加
                cout << "输入有误" << endl;
                break;
            }
        }
        cout << endl;
        cout << "排队:1  就诊:2  查看排队:3  不再排队依次就诊:4  下班:5" << endl;
        cout << "你的选择是：";
        cin >> c;
    }
    cout << endl;
    return 0;
}
