#include <iostream>
#include <stdlib.h>
using namespace std;

int monthDay[14] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//修正2月
void leapYear(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    {
        monthDay[2] = 29;
    }
    else
    {
        monthDay[2] = 28;
    }
}

int main()
{
    int ans = 0;
    int year = 2000, month = 1, day = 1, week = 6;

    while (!(year == 2020 && month == 10 && day == 1))
    {
        if (day == 1 || week == 1)
        {
            ans++;
        }
        ans++;
        //明天
        day++;
        //回归
        week = (week + 1) % 7;
        if (day > monthDay[month])
        {
            day = 1;
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
        leapYear(year);
    }
    //ans+1为截止日期,且截止日期为1号
    cout << ans + 2 << endl;
}
