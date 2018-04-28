#include<iostream>
#include<windows.h>
using namespace std;
double speed(int param);
void spaceTyper(int spacenum);
int main()
{
	int input, a, b, c, d, v, spacenum;	//分别为输入四位数与四位a、b、c、d，v表示速度,spacenum表示向左和向右运动后产生的空格数量
	cout << "输入你的数字" << endl;
	cin >> input;

	a = input / 1000;
	b = (input - a * 1000) / 100;
	c = (input - a * 1000 - b * 100) / 10;
	d = input - a * 1000 - b * 100 - c * 10;

	cout << "0-0";
	if (d != 0)	//向右
	{
		v = speed(d);	//求向右运动时的速度
		for (int i = 0; i < d + 30; i++)
		{
			Sleep(v);
			cout << "\b\b\b 0-0";
		}
	}
	if (c != 0)	//向左
	{
		v = speed(c);	//求向左运动时的速度
		for (int i = 0; i < c + 20; i++)
		{
			Sleep(v);
			cout << "\b\b\b   \b\b\b\b0-0";
			Beep(988, 20);	//发声
			Beep(732, 20);
		}
	}
	spacenum = (30 + d) - (20 + c);
	if (b != 0)	//向下
	{
		v = speed(b);	//求向下运动时的速度
		for (int i = 0; i < b + 10; i++)
		{
			Sleep(v);
			cout << "\b\b\b   \n";
			spaceTyper(spacenum);
			cout << "0-0";
		}
	}
	if (a != 0)	//向斜下
	{
		v = speed(a);	//求向斜下运动时的速度
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
void spaceTyper(int spacenum)	//打空格
{
	for (int i = 0; i < spacenum; i++)
	{
		cout << " ";
	}
}
double speed(int param)	//计算速度
{
	double speed;
	speed = 1000 / (param + 1);
	return speed;
}