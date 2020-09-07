#include <iostream>
#include <cstring>
using namespace std;

class clock
{
private:
    int hour;
    int minute;
    int second;
public:
    void settime(int hour, int minute, int second);
    clock()
    {

    }
    clock(clock &c)
    {
        this->second = c.second;
    }
    
    void showtime()
    {
        cout << hour<<"Ê±"<<minute<<"·Ö"<<second<<"Ãë"<< endl;
    }
};

void clock::settime(int hour, int minute, int second)
{
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}
int main()
{
    clock c;
    c.settime(0, 0, 0);
    c.showtime();
    system("pause");
}