#include <iostream>
#include<stdlib.h>
#include <string>
using namespace std;
bool is_num(char a);
int main()
{
	char ISBN[13];
	int s = 0;	//加权和
	int j = 0;	//数字位置标识
	cout << "请输入校验码:" << endl;
	cin.get(ISBN, 12);
	for (int i = 0; i < 12; i++)	//求和
	{
		if (is_num(ISBN[i]))
		{
			s += (int)(ISBN[i] - 48) * (10 - j);
			j++;
		}
	}
	s = s % 11;	//整除
	s = 11 - s;	//做差
	cout << "转换后的ISBN码为：" << ISBN;
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