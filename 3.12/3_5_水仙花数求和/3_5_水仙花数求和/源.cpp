#include<iostream>
using namespace std;
int main()
{
	cout << "开始运行" << endl;
	int sum = 0, a, b, c;	//sum为计数器，a、b、c分别为三位数字
	for (int i = 100; i < 1000; i++)
	{
		a = i / 100;
		b = (i - a * 100) / 10;
		c = i - a * 100 - b * 10;
		//cout <<i<< a << b << c<<endl;
		if (a*a*a + b * b*b + c * c*c == i)
		{
			sum = sum + i;
		}
	}
	cout << "水仙花数的总和是：" << sum << endl;
	return 0;
}