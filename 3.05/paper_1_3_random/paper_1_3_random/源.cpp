#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;
int main()
{
	unsigned num1, num2;
	//srand(time(NULL));
	num1 = rand() % 100;
	cout << "输入你猜想的数字：" << endl;
	cin >> num2;
	if (num1 == num2)
	{
		cout << "猜对了\n";
	}
	else
	{
		if (num1>num2)
		{
			cout << "小了\n";
		}
		else
		{
			cout << "大了\n";
		}
	}
	return 0;
}