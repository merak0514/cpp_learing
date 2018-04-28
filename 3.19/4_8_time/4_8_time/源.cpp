#include<iostream>
#include<windows.h>
#include <time.h>
using namespace std;
int matrix[100][3];	//时间矩阵
int line_min;	//时间最小的行
int min_time = 999999;	//最小的时间

void new_time(int i);
int main()
{
	int s, m, h;
	for (int k = 0; k < 100; k++)
	{
		new_time(k);
	}
	h = min_time / 10000;	//提取出时、分、秒
	m = min_time % 10000 / 100;
	s = min_time % 100;
	for (int i = 0; i < 10; i++)      //只模拟运行秒钟
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
				for (int m = 0; m < h; m++)	//整点报时模块
				{
					cout << '\007';
					Sleep(500);	//鸣叫后暂停0.5秒
				}
			}
		}
		cout << '\r';		//不换行，返回当前行的首位
		Sleep(1000);  	//程序暂停运行秒
		cout << h << ':' << m << ':' << s;
	}
	cout << endl;
	return 0;
}
void new_time(int i)	//随机生成时间模块
{
	int s, m, h;
	srand(time(NULL) + i);	//+i避免出现相同随机数
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
