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
		cout << "��� " << 0.5 * (s.a + s.b + s.c);
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
			cout << ",��ֱ��������" << endl;
		}
		else if (s.a * s.a + s.b * s.b > s.c * s.c)
		{
			cout << ",�Ƕ۽�������" << endl;
		}
		else
		{
			cout << ",�����������" << endl;
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