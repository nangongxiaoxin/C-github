#include<iostream>
#include<cstring>
using namespace std;
class point
{
	int x, y, z;//Ĭ��Ϊ˽��
public:
	point(int a,int b,int c):x(a),y(b),z(c){}//ʹ���б��ʼ��
	void show()
	{
		cout << x << ' ' << y << ' ' << z;
	}
};
class colorpt:public point
{
	char s[20];
public:
	colorpt(int a, int b, int c, const char d[20]) :point(a, b, c) //main���θ�colorpt��a,b,c,d��Ȼ���ֽ����point��a,b,c����point��abc��xyz�ٴθ�ֵ������point:show()���ú��������
	{
		strcpy_s(s, d);
	}
	void show()
	{
		cout << endl;
		point::show();
		cout << ' ' << s << endl;//�˴�coutֻ����ո��ַ����顢�س���
	}
};
int main()
{
	point q(2,3,5);
	q.show();
	colorpt r(20, 30, 50, "red");
	r.show();					//����color�е�showֻ����ո��ַ����顢�س���
	system("pause");
	return 0;
}