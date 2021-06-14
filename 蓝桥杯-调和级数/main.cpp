#include <iostream>
#include <stdlib.h>
using namespace std;
int Sum(double n)
{
    double sum_s = 0;
    long i;
    for (i = 1; sum_s < n; i++)
    {
        sum_s = sum_s + 1.0 / i;
    }
    return i - 1;
}
int main()
{
    double s;
    cout << "输入目标值：";
    cin >> s;
    cout << "数量为:" << Sum(s) << endl;
    return 0;
}