#include<iostream>
#include<windows.h>
using namespace std;
double speed(int param);
void spaceTyper(int spacenum);
int main()
{
	int input, a, b, c, d, v, spacenum;	//�ֱ�Ϊ������λ������λa��b��c��d��v��ʾ�ٶ�,spacenum��ʾ����������˶�������Ŀո�����
	cout << "�����������" << endl;
	cin >> input;

	a = input / 1000;
	b = (input - a * 1000) / 100;
	c = (input - a * 1000 - b * 100) / 10;
	d = input - a * 1000 - b * 100 - c * 10;

	cout << "0-0";
	if (d != 0)	//����
	{
		v = speed(d);	//�������˶�ʱ���ٶ�
		for (int i = 0; i < d + 30; i++)
		{
			Sleep(v);
			cout << "\b\b\b 0-0";
		}
	}
	if (c != 0)	//����
	{
		v = speed(c);	//�������˶�ʱ���ٶ�
		for (int i = 0; i < c + 20; i++)
		{
			Sleep(v);
			cout << "\b\b\b   \b\b\b\b0-0";
			Beep(988, 20);	//����
			Beep(732, 20);
		}
	}
	spacenum = (30 + d) - (20 + c);
	if (b != 0)	//����
	{
		v = speed(b);	//�������˶�ʱ���ٶ�
		for (int i = 0; i < b + 10; i++)
		{
			Sleep(v);
			cout << "\b\b\b   \n";
			spaceTyper(spacenum);
			cout << "0-0";
		}
	}
	if (a != 0)	//��б��
	{
		v = speed(a);	//����б���˶�ʱ���ٶ�
		for (int i = 0; i < a + 10; i++)
		{
			Sleep(v);
			cout << "\b\b\b   \n";
			spaceTyper(spacenum + i + 1);
			cout << "0-0";
		}
	}
	return 0;
}
void spaceTyper(int spacenum)	//��ո�
{
	for (int i = 0; i < spacenum; i++)
	{
		cout << " ";
	}
}
double speed(int param)	//�����ٶ�
{
	double speed;
	speed = 1000 / (param + 1);
	return speed;
}