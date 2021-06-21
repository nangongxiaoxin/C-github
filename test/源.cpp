#include<iostream>
#include<string.h>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
typedef struct Sales
{
	struct Sales* next;
	int Id;
	char name[10];
	//string name;
	int dept;
	double performance;

}Sales, * SalesM;
void Show(SalesM P);
void Menu()
{
	cout << "B19011519魏晨辉" << endl;
	printf("************************************************\n");
	printf("         *    1、建立业务员信息表    *          \n");
	printf("         *    2、插入新业务员信息    *          \n");
	printf("         *    3、查询业务员信息记录  *          \n");
	printf("         *    4、删除业务员信息      *          \n");
	printf("         *    5、业务员业绩排序      *          \n");
	printf("         *    6、显所有业务员信息    *          \n");
	printf("         *    0、退出管理系统        *          \n");
	printf("************************************************\n");
}
Sales* Create(SalesM& L)
{
	int num;
	cout << "请输入你想要创建的业务员数量" << endl;
	cin >> num;
	L = (Sales*)malloc(sizeof(Sales));//初始化头节点，头节点不保存数据
	L->next = NULL;              //让其下一个指向空
	SalesM m = L;               //创建一个新节点来保存头节点位置，目的是让头节点保持不动
	for (int i = 0; i < num; i++)
	{
		SalesM P = (SalesM)malloc(sizeof(Sales));//创建新节点
		cout << "请输入第" << i + 1 << "个业务员的信息" << endl;
		cout << "请输入业务员编号：";
		cin >> P->Id;
		cout << "请输入业务员姓名：";
		cin >> P->name;
		cout << "请输入业务员部门：";
		cin >> P->dept;
		cout << "请输入业务员业绩：";
		cin >> P->performance;
		P->next = m->next;//让新节点下一个指向头节点下一个，
		m->next = P;
		m = P;
	}
	cout << "创建成功！" << endl;
	return L;
}
void Insert(SalesM& P)
{
	Sales* s = P;
	if (s == NULL)
	{
		cout << "信息表为空，直接创建" << endl;
		int choice;
		cout << "1、创建 2、关闭" << endl;
		cin >> choice;
		if (choice == 1)
		{
			P = Create(P);
			return;
		}
		return;
	}
	while (s->next != NULL) {
		s = s->next;
	}
	int num;
	printf("请输入要插入的个数：");
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "请输入第" << i + 1 << "个业务员的信息" << endl;
		SalesM pnew = (SalesM)malloc(sizeof(Sales));//创建新节点
		cout << "请输入业务员编号：";
		cin >> pnew->Id;
		cout << "请输入业务员姓名：";
		cin >> pnew->name;
		cout << "请输入业务员部门：";
		cin >> pnew->dept;
		cout << "请输入业务员业绩：";
		cin >> pnew->performance;
		pnew->next = s->next;
		s->next = pnew;
		s = pnew;
	}
	return;
}
void find(SalesM P)
{
	bool flag = false;//判断是否找到该宠物、默认为没找到
	cout << "==================================" << endl;
	cout << "你已进入查询业务员模式" << endl;
	cout << "==================================" << endl;
	if (P == NULL)
	{
		printf("业务员表为空");
		return;
	}
	int choice;
	cout << "请输入查询方式：1、Id查询\t2、姓名查询" << endl;
	cin >> choice;
	if (choice == 1)
	{
		Sales* m = P->next;
		int Id;
		cout << "请输入你要查的业务员的Id：";
		cin >> Id;
		while (m)
		{
			if (m->Id == Id)
			{
				cout << "你所要查的业务员信息如下:" << endl;
				cout << "业务员编号\t业务员姓名\t业务员部门\t业务员业绩" << endl;
				cout << m->Id << "\t";
				cout << m->name << "\t";
				cout << m->dept << "\t";
				cout << m->performance << endl;
				flag = true;
			}
			m = m->next;
		}
	}
	else
	{
		Sales* m = P->next;
		char name[10];
		cout << "请输入你要查的业务员的姓名：";
		cin >> name;
		while (m)
		{
			if (!strcmp(m->name, name))
			{
				cout << "你所要查的业务员信息如下:" << endl;
				cout << "业务员编号\t业务员姓名\t业务员部门\t业务员业绩" << endl;
				cout << m->Id << "\t";
				cout << m->name << "\t";
				cout << m->dept << "\t";
				cout << m->performance << endl;
				flag = true;
			}
			m = m->next;
		}
	}
	if (!flag)
	{
		cout << "抱歉，没有找到此信息" << endl;
	}
}
void del(SalesM& P)
{
	cout << "==================================" << endl;
	cout << "删除功能如下" << endl;
	cout << "==================================" << endl;
	if (P == NULL)
	{
		cout << "信息表为空" << endl;
		return;
	}
	int Id;
	cout << "请输入你要删除的业务员的Id:";
	cin >> Id;
	Sales* m;
	m = (Sales*)malloc(sizeof(Sales*));
	m = m->next;
	Sales* l = P;
	Sales* p = NULL;
	while (m != NULL)
	{
		if (m->Id == Id)
		{
			cout << "业务员编号\t业务员姓名\t业务员部门\t业务员业绩" << endl;
			cout << m->Id << "\t";
			cout << m->name << "\t";
			cout << m->dept << "\t";
			cout << m->performance << endl;
			l->next = m->next;
			p = m;
			m = m->next;
			free(p);
		}
		else
		{
			l = l->next;
			m = m->next;
		}
	}
}
void Sort(SalesM P)
{
	cout << "==================================" << endl;
	if (P == NULL)
	{
		printf("信息为空");
		return;
	}
	if (P->next == NULL)
	{
		return;
	}
	//int performance = 0;
	Sales* m = P->next;
	Sales* h = P->next;
	Sales* l = NULL;
	int Id;
	char name[10];
	int dept;
	double performance;
	cout << "业务员编号\t业务员姓名\t业务员部门\t业务员业绩" << endl;
	while (m != NULL)
	{
		while (h != NULL)
		{
			if (m->performance < h->performance)
			{
				Id = m->Id;
				strcpy_s(name, m->name);
				dept = m->dept;
				performance = m->performance;
				m->Id = h->Id;
				strcpy_s(m->name, h->name);
				m->dept = h->dept;
				m->performance = h->performance;
				h->Id = Id;
				strcpy_s(h->name, name);
				h->dept = dept;
				h->performance = performance;
			}
			h = h->next;
		}
		h = P->next;
		m = m->next;
	}
	m = P->next;
	while (m != NULL)
	{
		cout << m->Id << "\t";
		cout << m->name << "\t";
		cout << m->dept << "\t";
		cout << m->performance << endl;
		m = m->next;
	}
}
void Show(SalesM P)
{
	cout << "==================================" << endl;
	if (P == NULL)
	{
		printf("信息为空");
		return;
	}
	Sales* m = P->next;
	cout << "业务员编号\t业务员姓名\t业务员部门\t业务员业绩" << endl;
	while (m != NULL)
	{
		cout << m->Id << "\t";
		cout << m->name << "\t";
		cout << m->dept << "\t";
		cout << m->performance << endl;
		m = m->next;
	}
}
int main()
{
	SalesM S = NULL;
	cout << "=========================" << endl;
	while (1) {
		int choice;
		Menu();
		printf("请输入选择\n");
		cin >> choice;
		switch (choice)
		{
		case 1:S = Create(S);
			break;
		case 2:Insert(S);
			break;
		case 3:find(S);
			break;
		case 4:del(S);
			break;
		case 5:Sort(S);
			break;
		case 6:Show(S);
			break;
		case 0:
			printf("欢迎下次光临！\n");
			exit(0);
		}
		system("pause");
		system("cls");
	}
	return 0;
}