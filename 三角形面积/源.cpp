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
		cout << "�����" << sqrt(p * (p - d.a) * (p - d.b) * (p - d.c));
	}
	void f(sanjiao& d)
	{
		double x;
		if (d.a > d.b)	//ʹd.a��������С
		{
			x = d.a;
			d.a = d.b;
			d.b = x;
		}
		if (d.b > d.c)	//ʹd.b��������С����ͨ������ifʹa��b��c����С��������
		{
			x = d.b;
			d.b = d.c;
			d.c = x;
		}
		if (d.a * d.a + d.b * d.b == d.c * d.c)
		{
			cout << "����ֱ��������" << endl;
		}
		if (d.a * d.a + d.b * d.b > d.c * d.c)
		{
			cout << "�������������" << endl;
		}
		if (d.a * d.a + d.b * d.b < d.c * d.c)
		{
			cout << "���Ƕ۽�������" << endl;
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