//从小到大排序
//空间100
//输入小于100的数量时也可以判断
//数组在排序未结束前无变化时也会提前退出
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int c[10];
    int times = 0;
    int sign = 0;
    //cin>>c;
    for (int i = 0; i < 10; i++)
    {
        times++;
        c[i] = getchar();
        // if(c[i]=='\n'){
        //     break;
        // }
    }
    for (int j = 0; j <= 10; j++)
    { //控制内层循环的次数（外层循环的越多，从后往前越有序）
        for (int i = 1; i < 10 - j; i++)
        { //第j趟的循环，比较times-j次；把最小的数往前移动（反之，最后面的数是最大的）
            int exchange;
            if (c[i] < c[i - 1])
            {
                exchange = c[i];
                c[i] = c[i - 1];
                c[i - 1] = exchange;
                sign = 1;
            }
            if (sign = 0)
            {
                return 0;
            }
        }
    }
    cout << c << endl;
    cout << "----end----" << endl;
}