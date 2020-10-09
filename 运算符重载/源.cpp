#include<iostream>
#include<cstring>
using namespace std;
class v
{
	int x, y, z;
public:
	v(int a=0,int b=0,int c=0):x(a),y(b),z(c){}
	v operator +(v& ol)
	{
		v a2;
		a2.x = ol.x;
		a2.y = ol.y;
		a2.z = ol.z;
		return a2;
	}
};