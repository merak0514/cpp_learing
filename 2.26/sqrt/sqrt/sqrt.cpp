#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x;
	cout << "输入数字：";
	cin >> x;
	if ((x*x - 3 * x + 2) <= 0)
		cout << "错误\n";
	else
		cout << "得出的结果是：" << x / sqrt((x*x - 3 * x + 2))<<endl;
}