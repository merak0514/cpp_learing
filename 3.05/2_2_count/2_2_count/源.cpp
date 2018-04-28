#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x, y, result;
	cout << "输入x，y：\n";
	cin >> x >> y;
	if (cos(abs(x + y)) <= 0)	//判断分母是否为或试图对负数开根号
		cout << "wrong!输入数字有误" << endl;
	else
	{
		result = (sin(abs(x) + abs(y))) / (sqrt(cos(abs(x + y))));
		cout << "你计算的结果是：" << result << endl;
	}
}