#include <iostream>
#include<windows.h>
using namespace std;
bool is_num(int x);
int main()
{
	for (int x = 1; x < 10000000; x++)
	{
		if (is_num(x))
			cout << x << ' ';
	}
	return 0;
}
bool is_num(int x)
{
	unsigned last_num;
	unsigned second_last_num;
	while (x >= 10)
	{
		last_num = x % 10;	//获得最后一位
		x = x / 10;	//清除一位数字
		second_last_num = x % 10;	//倒数第二位数字
		if (last_num < second_last_num)
			return 0;
	}
	return 1;
}