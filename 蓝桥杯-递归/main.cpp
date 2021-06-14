#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int a = 0;

int main()
{
    int digui(int);
    int i = 100;
    cout << digui(i) << endl;
    return 0;
}
int digui(int i)
{
    if (i == 0)
    {
        return i;
    }
    return a + i + digui(i - 1);
}