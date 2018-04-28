#include<iostream>
using namespace std;
int main()
{
	int sum = 0, a, b, c, d;
	for (int i = 1000; i < 2001; i++)
	{
		a = i / 1000;
		b = (i - a * 1000) / 100;
		c = (i - a * 1000 - b * 100) / 10;
		d = i - a * 1000 - b * 100 - c * 10;
		if (a+b==c+d)
		{
			sum = sum + 1;
			cout <<"第"<<sum<<"位满足条件的数字是："<< i << endl;
		}
	}
	cout << "总共有" << sum << "个数字满足条件\n";
	return 0;
}