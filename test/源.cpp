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
	cout << "B19011519κ����" << endl;
	printf("************************************************\n");
	printf("         *    1������ҵ��Ա��Ϣ��    *          \n");
	printf("         *    2��������ҵ��Ա��Ϣ    *          \n");
	printf("         *    3����ѯҵ��Ա��Ϣ��¼  *          \n");
	printf("         *    4��ɾ��ҵ��Ա��Ϣ      *          \n");
	printf("         *    5��ҵ��Աҵ������      *          \n");
	printf("         *    6��������ҵ��Ա��Ϣ    *          \n");
	printf("         *    0���˳�����ϵͳ        *          \n");
	printf("************************************************\n");
}
Sales* Create(SalesM& L)
{
	int num;
	cout << "����������Ҫ������ҵ��Ա����" << endl;
	cin >> num;
	L = (Sales*)malloc(sizeof(Sales));//��ʼ��ͷ�ڵ㣬ͷ�ڵ㲻��������
	L->next = NULL;              //������һ��ָ���
	SalesM m = L;               //����һ���½ڵ�������ͷ�ڵ�λ�ã�Ŀ������ͷ�ڵ㱣�ֲ���
	for (int i = 0; i < num; i++)
	{
		SalesM P = (SalesM)malloc(sizeof(Sales));//�����½ڵ�
		cout << "�������" << i + 1 << "��ҵ��Ա����Ϣ" << endl;
		cout << "������ҵ��Ա��ţ�";
		cin >> P->Id;
		cout << "������ҵ��Ա������";
		cin >> P->name;
		cout << "������ҵ��Ա���ţ�";
		cin >> P->dept;
		cout << "������ҵ��Աҵ����";
		cin >> P->performance;
		P->next = m->next;//���½ڵ���һ��ָ��ͷ�ڵ���һ����
		m->next = P;
		m = P;
	}
	cout << "�����ɹ���" << endl;
	return L;
}
void Insert(SalesM& P)
{
	Sales* s = P;
	if (s == NULL)
	{
		cout << "��Ϣ��Ϊ�գ�ֱ�Ӵ���" << endl;
		int choice;
		cout << "1������ 2���ر�" << endl;
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
	printf("������Ҫ����ĸ�����");
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "�������" << i + 1 << "��ҵ��Ա����Ϣ" << endl;
		SalesM pnew = (SalesM)malloc(sizeof(Sales));//�����½ڵ�
		cout << "������ҵ��Ա��ţ�";
		cin >> pnew->Id;
		cout << "������ҵ��Ա������";
		cin >> pnew->name;
		cout << "������ҵ��Ա���ţ�";
		cin >> pnew->dept;
		cout << "������ҵ��Աҵ����";
		cin >> pnew->performance;
		pnew->next = s->next;
		s->next = pnew;
		s = pnew;
	}
	return;
}
void find(SalesM P)
{
	bool flag = false;//�ж��Ƿ��ҵ��ó��Ĭ��Ϊû�ҵ�
	cout << "==================================" << endl;
	cout << "���ѽ����ѯҵ��Աģʽ" << endl;
	cout << "==================================" << endl;
	if (P == NULL)
	{
		printf("ҵ��Ա��Ϊ��");
		return;
	}
	int choice;
	cout << "�������ѯ��ʽ��1��Id��ѯ\t2��������ѯ" << endl;
	cin >> choice;
	if (choice == 1)
	{
		Sales* m = P->next;
		int Id;
		cout << "��������Ҫ���ҵ��Ա��Id��";
		cin >> Id;
		while (m)
		{
			if (m->Id == Id)
			{
				cout << "����Ҫ���ҵ��Ա��Ϣ����:" << endl;
				cout << "ҵ��Ա���\tҵ��Ա����\tҵ��Ա����\tҵ��Աҵ��" << endl;
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
		cout << "��������Ҫ���ҵ��Ա��������";
		cin >> name;
		while (m)
		{
			if (!strcmp(m->name, name))
			{
				cout << "����Ҫ���ҵ��Ա��Ϣ����:" << endl;
				cout << "ҵ��Ա���\tҵ��Ա����\tҵ��Ա����\tҵ��Աҵ��" << endl;
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
		cout << "��Ǹ��û���ҵ�����Ϣ" << endl;
	}
}
void del(SalesM& P)
{
	cout << "==================================" << endl;
	cout << "ɾ����������" << endl;
	cout << "==================================" << endl;
	if (P == NULL)
	{
		cout << "��Ϣ��Ϊ��" << endl;
		return;
	}
	int Id;
	cout << "��������Ҫɾ����ҵ��Ա��Id:";
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
			cout << "ҵ��Ա���\tҵ��Ա����\tҵ��Ա����\tҵ��Աҵ��" << endl;
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
		printf("��ϢΪ��");
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
	cout << "ҵ��Ա���\tҵ��Ա����\tҵ��Ա����\tҵ��Աҵ��" << endl;
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
		printf("��ϢΪ��");
		return;
	}
	Sales* m = P->next;
	cout << "ҵ��Ա���\tҵ��Ա����\tҵ��Ա����\tҵ��Աҵ��" << endl;
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
		printf("������ѡ��\n");
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
			printf("��ӭ�´ι��٣�\n");
			exit(0);
		}
		system("pause");
		system("cls");
	}
	return 0;
}