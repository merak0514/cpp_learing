#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "输入a，b：";
	cin >> a >> b;
	if (a < 100 & b < 100 & a>10 & b>10)
		if (a < b)
			cout << "拼接后的数字为：" << b * 100 + a<<endl;
		else
			cout << "拼接后的数字为：" << a * 100 + b << endl;
	else
		cout << "输入错误\n";
	return 0;
}