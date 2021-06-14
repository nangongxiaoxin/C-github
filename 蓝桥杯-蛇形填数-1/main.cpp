#include <stdlib.h>
#include <iostream>
using namespace std;

//20行20列为对角线，对角线上的值为 上一个对角线的值+(4*行数)
int snakeNum(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        num = num + i * 4;
    }
    return num;
}

int main()
{
    int n;
    cin >> n;
    cout << snakeNum(n) << endl;
    return 0;
}