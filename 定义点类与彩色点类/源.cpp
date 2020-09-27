#include<iostream>
#include<string>
using namespace std;
class point
{
private:
	int x, y, z;
public:
	int a, b, c;
	void A(int b1, int b2, int b3)
	{
		x = b1;
		y = b2;
		z = b3;	//this指针可以用私有变量下的x,y,z对此处的x,y,z进行重新赋值
		//cout << x << " " << y << " " << z << endl;
	}
	void show()
	{
		cout << x << ' ' << y << ' ' << z << endl;
	}
};
class colorpt:public point
{
private:
	int a1, a2, a3;
	char a[20];
public:
	void B(int a1, int a2, int a3, const char b[20] = {})
	{
		this->a1 = a1;
		this->a2 = a2;
		this->a3 = a3;
		strcpy_s(a,b);
	}
	void show()
	{
		cout << a1 << ' ' << a2 << ' ' << a3 << ' ' << a << endl;
	}
};
int main()
{
	point q;
	q.A(2, 3, 5);
	q.show();
	colorpt w;
	w.B(10, 20, 30,"red");
	w.show();
	system("pause");
	return 0;
}