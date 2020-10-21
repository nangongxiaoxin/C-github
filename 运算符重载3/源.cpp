#include<iostream>
using namespace std;
class complex
{
	int a, b, c, x, y, z;
public:
	complex(int a,int b,int c,int x,int y,int z)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->x = x;
		this->y = y;
		this->z = z;
	}
	complex operator-();

};
complex complex::operator-()
{
	cout << a - x << " " << b - y << " " << c - z << endl;
}
int main()
{
	complex c1(10, 20, 30);


}