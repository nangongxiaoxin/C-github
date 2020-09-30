#include<iostream>
#include<cstring>
using namespace std;
class point
{
	int x, y, z;//默认为私有
public:
	point(int a,int b,int c):x(a),y(b),z(c){}//使用列表初始化
	void show()
	{
		cout << x << ' ' << y << ' ' << z;
	}
};
class colorpt:public point
{
	char s[20];
public:
	colorpt(int a, int b, int c, const char d[20]) :point(a, b, c) //main传参给colorpt的a,b,c,d，然后又将其给point的a,b,c，由point中abc对xyz再次赋值，经由point:show()调用后重新输出
	{
		strcpy_s(s, d);
	}
	void show()
	{
		cout << endl;
		point::show();
		cout << ' ' << s << endl;//此处cout只输出空格、字符数组、回车符
	}
};
int main()
{
	point q(2,3,5);
	q.show();
	colorpt r(20, 30, 50, "red");
	r.show();					//调用color中的show只输出空格、字符数组、回车符
	system("pause");
	return 0;
}