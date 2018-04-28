#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, d, e, f, x, y;
	cout << "输入六个数字，作为方程组的六个部分：\n";
	cin >> a >> b >> c >> d >> e >> f;
	cout << '\t' << a << "x + " << b << "y = " << c << endl;	//输出方程组
	cout << '\t' << d << "x + " << e << "y = " << f << endl;
	if ((a / d) == (b / e))	//判断两条线是否平行
	{
		if ((a / d) == (c / f))	//若平行，是否重合？
		{
			cout << "有无数个根" << endl;	//重合
		}
		else
		{
			cout << "无解" << endl;	//平行不重合
		}
	}
	else	//正常情况
	{
		y = (f - c * d / a) / (e - b * d / a);
		x = (f - e * y) / d;
		cout << "你输入方程计算的结果是：x= " << x << ",y= " << y << endl;
	}
	return 0;
}