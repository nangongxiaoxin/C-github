#include<iostream>
#include<cstring>
using namespace std;
class boot
{
private:
	double a;
public:
	static void weight(double a);
};
class car
{
private:
	double b;
public:
	static void weight(double b);
};
//class totalweight
//{
//	double d;
//	boot::weight() + car::weight();
//	cout << d<< endl;
//};
int main()
{
	boot B;
	B.weight(50.0);
	car C;
	C.weight(80.0);
	//totalweight;
	cout << B.weight + C.weight << endl;
	system("pause");
	return 0;
}