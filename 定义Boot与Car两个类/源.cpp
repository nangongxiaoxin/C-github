#include<iostream>
#include<cstring>
using namespace std;
class boat										//boat��
{
public:
	int weight;
	boat();
	boat(int weight)
	{
		this->weight = weight;					//���ҳ�ʼ��
	 }
	
	
};
class car
{
public:
	int weight;
	//car();
	car(int weight)
	{
		this->weight = weight;
	}
};

int main()
{
	boat() ;
	
	//B.show();
	car ;

	//C.show();
	system("pause");
	return 0;
}

car::car()
{
}
