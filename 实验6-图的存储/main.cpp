#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define Max_ver 100
#define Max_wei 32767
using namespace std;

typedef struct
{
    int ver[Max_ver];
    int edge[Max_ver][Max_ver];
    int numV;
    int numA;
} Node;

void CreateGraph(Node *G)
{
    int n, e, vi, vj, w;
    cout << "请输入图的顶点数和边数：" << endl;
    cin >> n >> e;
    G->numV = n;
    G->numA = e;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            G->edge[i][j] = 0;
            if (i == j)
            {
                G->edge[i][j] = 0;
            }
            else
            {
                G->edge[i][j] = Max_wei;
            }
        }
    }
    for (int i = 0; i < G->numV; i++)
    {
        cout << "\n请输入第" << i + 1 << "个顶点信息";
        cin >> G->ver[i];
    }
    for (int i = 0; i < G->numA; i++)
    {
        cout << "请输入边的信息vi,vj,w：" << endl;
        cin >> vi >> vj >> w;
        G->edge[vi - 1][vj - 1] = w;
    }
}

void showGraph(Node *G)
{
    int i, j;
    cout << "输出顶点信息：" << endl;
    for (i = 0; i < G->numV; i++)
    {
        cout << G->ver[i] << " ";
    }
    cout << endl;
    cout << "输出邻接矩阵信息" << endl;
    cout << "  ";
    for (i = 0; i < G->numV; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
    for (i = 0; i < G->numV; i++)
    {
        cout << i + 1 << " ";
        for (j = 0; j < G->numV; j++)
        {
            if (G->edge[i][j] == Max_wei)
            {
                cout << "^ ";
            }
            else
            {
                cout << G->edge[i][j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    Node G;
    CreateGraph(&G);
    showGraph(&G);
    return 0;
}