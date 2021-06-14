#include <stdio.h>
#include <iostream>
using namespace std;

int Loc(int L[], int e)
{
    int low = 1;
    int heigh = L[0];
    int mid;
    while (low <= heigh)
    {
        mid = (low + heigh) / 2;
        if (L[mid] == e)
        {
            return mid;
        }
        if (L[mid] < e)
        {
            low = mid + 1;
        }
        if (L[mid] > e)
        {
            heigh = mid - 1;
        }
        if (low > heigh)
        {
            cout << "查无此数" << endl;
            return 0;
        }
    }
    cout << "输入有误" << endl;
    exit(0);
}

int Find(int L[], int e)
{
    for (int i = 1; i < L[0]; i++)
    {
        if (L[i] == e)
        {
            return i;
        }
    }
    cout << "查无此数" << endl;
    return 0;
}

void PaiXu(int *L)
{
    for (int i = 1; i < L[0]; i++)
    {
        //保证每一次最大的数在最后面
        for (int j = 2; j <= L[0] - i + 1; j++)
        {
            int exchange;
            if (L[j] < L[j - 1])
            {
                exchange = L[j];
                L[j] = L[j - 1];
                L[j - 1] = exchange;
            }
        }
    }
}

int main()
{
    int n, a = 0;
    int e, h, t = 0;
    cout << "需要比对的数据个数：";
    cin >> n;
    int L[n] = {0};

    cout << "输入" << n << "个数:";
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &L[i]);
        L[0]++;
    }

    while (a != 4)
    {
        cout << "想要进行的操作： 【1】:进行排序并输出；【2】:顺序查找；【3】:折半查找；【4】:退出；" << endl;
        cout << "你的选择是：";
        cin >> a;
        switch (a)
        {
        case 1:
            PaiXu(L);
            for (int i = 1; i <= L[0]; i++)
            {
                cout << L[i] << " ";
            }
            cout << endl;
            break;

        case 2:

            cout << "输入需要查找的数：";
            scanf("%d", &e);
            // int f_2 = Find(L, h);
            // if (f_2 != 0)
            // {
            //     cout << "位置在：" << f_2 << endl;
            // }

            for (int i = 1; i <= L[0]; i++)
            {
                if (L[i] == e)
                {
                    cout << i << endl;
                    break;
                }
                else if (L[0] == i)
                {
                    cout << "查无此数" << endl;
                    break;
                }
            }
            break;

        case 3:
            cout << "输入需要查找的数：";
            scanf("%d", &e);
            int f = Loc(L, e);
            if (f != 0)
            {
                cout << "位置在：" << f << endl;
            }
            break;
        }
    }
    return 0;
}
