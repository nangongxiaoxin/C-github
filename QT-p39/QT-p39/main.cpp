#include<iostream>
#include<cstring>
using namespace std;
class Person
{
    char m_strName[10];
    int m_nAge;
public:
    Person(char *name,int age)
    {
        strcpy(m_strName,name);
        m_nAge=age;
        cout<<"constructor of person"<<m_strName<<endl;
    }
    ~Person()
    {
        cout<<"deconstrutor of person"<<m_strName<<endl;
    }
};
class Employee:public Person
{
    char m_strDept[20];
    Person Wang;
public:
    Employee(char *name,int age,char *dept,char *name1,int age1):Person(name,age),Wang(name1,age1)
    {
        strcpy(m_strDept,dept);
        cout<<"constructor of Employee"<<endl;
    }
    ~Employee()
    {
        cout<<"deconstrucor of Employee"<<endl;
    }

};
int main()
{
    Employee emp(" zhang",40," ren"," wang",36);
    return 0;
}
