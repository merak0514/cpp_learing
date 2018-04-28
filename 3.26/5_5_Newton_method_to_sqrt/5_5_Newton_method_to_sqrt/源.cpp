#include <iostream>
#include<cmath>
using namespace std;
double const ACCURACY = 1e-7;
double mysqrt(double x);
int main()
{
	double x;
	cout << "请输入你要开方的变量x：" << endl;
	cin >> x;
	cout << "square(x) by my function mysqrt: " << mysqrt(x) << endl;
	cout << "square(x) by inner function sqrt: " << sqrt(x) << endl;
	cout << "diff between this two is: " << abs(mysqrt(x) - sqrt(x)) << endl;
	return 0;
}
double mysqrt(double x)
{
	double ymax = x, ymin = 0;
	while (abs(ymax - ymin) > ACCURACY)
	{
		double temp = (ymax + ymin) / 2;
		if (temp*temp >= x)
			ymax = temp;
		else
			ymin = temp;
	}
	return ymax;
}