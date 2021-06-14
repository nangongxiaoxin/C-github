#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int gcd(int i, int j)
{
    if (j == 0)
    {
        return i;
    }
    return gcd(j, i % j);
}
int main()
{
    int i, j, ans = 0, ans_1 = 0;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (gcd(i, j) == 1)
            {

                ans++;
                if (i + j != 10)
                {
                    cout << i << "," << j << endl;
                }
                else
                {
                    ans_1++;
                    cout << "####" << i << "," << j << "####" << endl;
                }
            }
        }
    }
    cout << "----" << ans << "----" << endl;
    cout << "####" << ans_1 << "####" << endl;
}