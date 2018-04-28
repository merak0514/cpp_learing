#include <iostream>
#include<windows.h>
using namespace std;
void walking(char car[], int n, int k, char direction)
{

	int i;
	char del_car[80];     //存放消除小车的字符串
	for (i = 0; i < strlen(car); i++)
	{
		del_car[i] = '\b';	//形成与小车同样长度字符串
		del_car[i + strlen(car)] = ' ';	//补上空格遮住小车
		del_car[i + 2 * strlen(car)] = '\b';	//移动光标
	}
	del_car[i + 2 * strlen(car)] = '\0';	//字符串尾部添加结束符
	if (direction == 'C')
	{
		for (int k = 0; k < n; k++)
			cout << ' ';
	}
	for (i = 0; i < n; i++) 	//循环控制小车走n步
	{
		switch (direction)
		{
		case 'A':
			cout << ' ' << car;
			break;
		case 'B':
			cout << '\n' << car;
			break;
		case 'C':
			cout << '\b' << car;
			break;
		case 'D':
			cout << endl;
			for (int j = 0; j < i; j++)
				cout << ' ';
			cout << car;
			break;
		default:
			cout << "输入错误";
			exit;
		}

		Sleep(1000 / k);		//程序暂停1/k秒
		cout << del_car;		//消除显示的小车
	}
}
int main()   // 测试函数walking() 用的主函数
{
	cout << "输入你的车：";
	char car[91];
	cin.get(car, 90);
	cout << "输入步数: ";
	int step;
	cin >> step;
	cout << "输入速度：";
	int speed;
	cin >> speed;
	cout << "输入类型：";
	char type;
	cin >> type;
	walking(car, step, speed, type);
	return 0;
}
