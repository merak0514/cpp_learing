#include <iostream>
#include<stdlib.h>
#include <string>
using namespace std;
bool is_num(char a);
int main()
{
	char ISBN[13];
	int s = 0;	//��Ȩ��
	int j = 0;	//����λ�ñ�ʶ
	cout << "������У����:" << endl;
	cin.get(ISBN, 12);
	for (int i = 0; i < 12; i++)	//���
	{
		if (is_num(ISBN[i]))
		{
			s += (int)(ISBN[i] - 48) * (10 - j);
			j++;
		}
	}
	s = s % 11;	//����
	s = 11 - s;	//����
	cout << "ת�����ISBN��Ϊ��" << ISBN;
	switch (s)
	{
	case 10:
		cout << "-X";
		break;
	case 11:
		cout << "-0";
		break;
	default:
		if (s >= 0 && s <= 10)
			cout << "-" << s;
		else
			cout << 'N';
	}
	cout << endl;
	return 0;
}
bool is_num(char a)
{
	if (a <= 57 && a >= 48)
		return 1;
	else
		return 0;
}