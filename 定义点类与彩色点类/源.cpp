#include<iostream>
using namespace std;
class point
{
private:
	int x = 1, y = 2, z = 3;
public:
	void A(int x, int y, int z)
	{
		//this->x = x;
		//this->y = y;
		//this->z = z;	//this指针可以用私有变量下的x,y,z对此处的x,y,z进行重新赋值
		cout << x << " " << y << " " << z << endl;
	}
	void show()
	{
		cout << x << " " << y << " " << z << endl;
	}
};
int main()
{
	point q;
	q.A(4, 5, 6);
	q.A(7, 8, 9);	//模块化操作，将功能与数据分开
	q.show();
	system("pause");
	return 0;
}