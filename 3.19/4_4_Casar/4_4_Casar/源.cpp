#include<iostream>
#include <windows.h>
using namespace std;
int type(char a);
int main()
{
	char input[20];
	int len;	//字符串长度
	cout << "请输入你要转换的字母和数字 （小于19个）：\n";
	cin.get(input, 20);
	len = strlen(input);
	for (int i = 0; i < len; i++)
	{
		if (input[i] != (char)' ')	//防止空格输入报错
		{
			switch (type(input[i]))
			{
			case 0:
				input[i] += 3;
				if (input[i] > 57) input[i] -= 10;
				break;
			case 1:
				input[i] += 3;
				if (input[i] > 90) input[i] -= 26;
				break;
			case 2:
				input[i] += 3;
				if (input[i] > 122) input[i] -= 26;
				break;
			default:
				cout << "输入有误！！！" << endl;
				return 0;

			}
		}
	}
	cout << "转换后的字符串是：\n";
	for (int i = 0; i < len; i++)
	{
		cout << input[i];
	}
	cout << endl;
	return 0;
}
int type(char a)	//输出0代表输入的是数字；输出1代表是大写字母；2代表小写字母；输入有误则返回-1.
{
	if (a >= 48 && a <= 57) return 0;
	else {
		if (a <= 90 && a >= 65) return 1;
		else {
			if (a >= 97 && a <= 122) return 2;
			else return -1;
		}
	}
}