#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int a, b, c, d, e, f, sum;
    cin >> sum; //给定数位和为条件
    for (int i = 10000; i < 999999; i++)
    {
        if (i >= 10000 && i < 99999)
        {
            a = i / 10000 % 10;
            b = i / 1000 % 10;
            c = i / 100 % 10;
            d = i / 10 % 10;
            e = i / 1 % 10;
            if (a + b + c + d + e == sum && a == e && b == d)
            {
                cout << i << endl;
            }
        }
        else
        {
            a = i / 100000 % 10;
            b = i / 10000 % 10;
            c = i / 1000 % 10;
            d = i / 100 % 10;
            e = i / 10 % 10;
            f = i / 1 % 10;
            if (a + b + c + d + e + f == sum && a == f && b == e && c == d)
            {
                cout << i << endl;
            }
        }
    }
}