#include<iostream>
#include<cmath>
using namespace std;
unsigned int i = 1,type;
double factorial = 1;	//�豣֤�����ɴ�С�㹻��
/*
����������������������ڳ�ʼ������N
*/
int char_type() 
{
	char N = 1;
	while (N == factorial)
	{
		N = N * i;
		factorial = factorial * i;
		i++;
	}
	return (i - 2);
}
int short_type()
{
	short N = 1;
	while (N == factorial)
	{
		N = N * i;
		factorial = factorial * i;
		i++;
	}
	return (i - 2);
}
int int_type()
{
	unsigned int N = 1;
	while (N == factorial)
	{
		N = N * i;
		factorial = factorial * i;
		i++;
	}
	return (i - 2);
}
int main()	//���û�������������͵��ú���
{
	cout<<"������Ҫ���е��������ʹ��ţ�1. �ַ�������2. �����α�����3. ���α�������\n";
	cin >> type;
	switch (type)
	{
	case 1:
		cout << "����N=" << char_type() << endl;
		break;
	case 2:
		cout << "����N=" << short_type() << endl;
		break;
	case 3:
		cout << "����N=" << int_type() << endl;
		break;
	default:
		cout << "���������룡��" << endl;
		break;
	}
}