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
		//this->z = z;	//thisָ�������˽�б����µ�x,y,z�Դ˴���x,y,z�������¸�ֵ
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
	q.A(7, 8, 9);	//ģ�黯�����������������ݷֿ�
	q.show();
	system("pause");
	return 0;
}