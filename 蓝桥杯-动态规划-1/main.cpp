#include <stdio.h>
#include <iostream>
#include <limits.h>
using namespace std;

//int coinChange(int, int);
int moreMin(int x, int y)
{
    if (x > y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
int coinChange(int N, int A[], int M)
{
    int i, j;
    //从小到大，每一元钱的组成存入数组
    int f[M + 1];
    //特殊值，0元由0个硬币组成
    f[0] = 0;
    for (i = 1; i <= M; ++i)
    {
        //每个初始f[i]的大小为最大值，无法构成的价值为无限大
        f[i] = 9999;
        for (j = 0; j < N; ++j)
        {
            //价值必须大于硬币面额，组成这个价值的子价值不能为无限大
            if (i >= A[j] && f[i - A[j]] != 9999)
            {
                //f[i]为最小的数量；
                f[i] = moreMin(f[i - A[j]] + 1, f[i]);
            }
        }
    }
    //无解时
    if (f[M] == 9999)
    {
        f[M] = -1;
    }
    return f[M];
}

int main()
{
    int M, N;
    cout << "输入硬币数量：";
    cin >> N;
    int A[N];

    cout << "输入硬币面额：";
    for (int i = 0; i < N; ++i)
    {
        cin >> A[N];
    }
    cout << "输入价值：";
    cin >> M;
    cout << coinChange(N, A, M);
}