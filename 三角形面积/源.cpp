#include<iostream>
//#include<math.h>
using namespace std;

class sanjiao
{
public:
	sanjiao(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void  S(sanjiao& s)
	{
		cout << "面积 " << 0.5 * (s.a + s.b + s.c);
	}
	void Issanjiao(sanjiao& s)
	{
		int temp = 0;
		if (s.a > s.b)
		{
			temp = s.a;
			s.a = s.b;
			s.b = temp;
		}
		if (s.b > s.c)
		{
			temp = s.b;
			s.b = s.c;
			s.c = temp;
		}
		if (s.a * s.a + s.b * s.b == s.c * s.c)
		{
			cout << ",是直角三角形" << endl;
		}
		else if (s.a * s.a + s.b * s.b > s.c * s.c)
		{
			cout << ",是钝角三角形" << endl;
		}
		else
		{
			cout << ",是锐角三角形" << endl;
		}
	}
private:
	int a, b, c;
};
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	sanjiao C(a, b, c);
	C.S(C);
	C.Issanjiao(C);
	system("pause");
	return 0;
}