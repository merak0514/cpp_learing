#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int	num, a, b, c, d,result;
	cout << "请输入一个四位数：\n";
	cin >> num;
	if ((num > 9999) | (num < 1000))	//若不是四位数，报错
		cout << "数字有误！\n";
	else
	{
		a = num / 1000;	//以下四行分别拆分每一位数字
		b = (num - 1000 * a) / 100;
		c = (num - 1000 * a - 100 * b) / 10;
		d = (num - 1000 * a - 100 * b - 10 * c);
		result = a * a*a + b * b*b + c * c*c + d * d*d;
		cout << "立方后的结果是：" << a * a*a << '+' << b * b*b << '+' << c * c*c << '+' << d * d*d << '=' << result << endl;
	}
	return 0;
}