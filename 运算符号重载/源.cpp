#include<iostream>
using namespace std;
class complex
{
    int x;
    int y;
    int z;
public:
    complex(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    complex& operator+(complex& P)
    {
        P.x += this->x;
        P.y += this->y;
        P.z += this->z;
        return P;
    }
    complex& operator-(complex& P)
    {
        P.x += this->x;
        P.y += this->y;
        P.z += this->z;
        return P;
        void show();
    }
    void Show()
    {
        cout << this->x << " " << this->y << " " << this->z << endl;
    }
    
};
int main()
{
    complex c2(9, 8, 7);
    complex c1(10, 20, 30);
    (c1 + c2).Show();//c2=c1.operator+(c2);
    (c1 + c2).Show();
                     //(c2 - c1).Show();
    
    
    system("pause");
    return 0;
}