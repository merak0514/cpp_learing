#include<iostream>
#include<windows.h>
#include <time.h>
using namespace std;
int matrix[100][3];	//ʱ�����
int line_min;	//ʱ����С����
int min_time = 999999;	//��С��ʱ��

void new_time(int i);
int main()
{
	int s, m, h;
	for (int k = 0; k < 100; k++)
	{
		new_time(k);
	}
	h = min_time / 10000;	//��ȡ��ʱ���֡���
	m = min_time % 10000 / 100;
	s = min_time % 100;
	for (int i = 0; i < 10; i++)      //ֻģ����������
	{
		s++;
		if (s == 60)
		{
			s = 0;
			m++;
			if (m == 60)
			{
				m = 0;
				h++;
				if (h == 24) h = 0;
				for (int m = 0; m < h; m++)	//���㱨ʱģ��
				{
					cout << '\007';
					Sleep(500);	//���к���ͣ0.5��
				}
			}
		}
		cout << '\r';		//�����У����ص�ǰ�е���λ
		Sleep(1000);  	//������ͣ������
		cout << h << ':' << m << ':' << s;
	}
	cout << endl;
	return 0;
}
void new_time(int i)	//�������ʱ��ģ��
{
	int s, m, h;
	srand(time(NULL) + i);	//+i���������ͬ�����
	h = rand() % 12;
	m = rand() % 60;
	s = rand() % 60;
	if ((h * 10000 + m * 100 + s) < min_time)
	{
		min_time = h * 10000 + m * 100 + s;
		line_min = i;
	}
	matrix[i][0] = h;
	matrix[i][1] = m;
	matrix[i][2] = s;
	cout << h << ':' << m << ':' << s << endl;
}
