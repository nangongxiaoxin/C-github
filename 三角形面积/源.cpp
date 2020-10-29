#include<iostream>
#include<cmath>
using namespace std;
class sanjiao
{
	double a, b, c;
public:
	sanjiao(double a, double b, double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void s(sanjiao& d)
	{
		double p;
		p = (d.a + d.b + d.c) / 2;
		cout << "面积是" << sqrt(p * (p - d.a) * (p - d.b) * (p - d.c));
	}
	void f(sanjiao& d)
	{
		double x;
		if (d.a > d.b)	//使d.a是两者最小
		{
			x = d.a;
			d.a = d.b;
			d.b = x;
		}
		if (d.b > d.c)	//使d.b是两者最小；即通过两个if使a、b、c按从小到大排列
		{
			x = d.b;
			d.b = d.c;
			d.c = x;
		}
		if (d.a * d.a + d.b * d.b == d.c * d.c)
		{
			cout << "，是直角三角形" << endl;
		}
		if (d.a * d.a + d.b * d.b > d.c * d.c)
		{
			cout << "，是锐角三角形" << endl;
		}
		if (d.a * d.a + d.b * d.b < d.c * d.c)
		{
			cout << "，是钝角三角形" << endl;
		}
	}
};
	int main()
	{
		int a, b, c;
		cin >> a >> b >> c;
		sanjiao C(a, b, c);
		C.s(C);
		C.f(C);
		return 0;
	}