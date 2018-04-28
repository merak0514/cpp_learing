#include <iostream>
#include<cmath>
using namespace std;
double equation(double x);
double line(double x0, double x1);
int main()
{
	double x0, x1, x2, y0, y1, y2, error, nerror;
	cout << "依次输入x0、x1、误差范围：\n";
	cin >> x0 >> x1 >> error;
	y0 = equation(x0);
	y1 = equation(x1);
	if ((y0*y1 >= 0) || (x0 > x1))
	{
		cout << "范围内无解或错误" << endl;
	}
	else
	{
		do
		{
			x2 = line(x0, x1);
			y2 = equation(x2);
			if (y0*y2 > 0)
			{
				nerror = abs(x2 - x0);
				x0 = x2;
				y0 = y2;
			}
			else
			{
				nerror = abs(x2 - x1);
				x1 = x2;
				y1 = y2;
			}
		} while (nerror > error);
		cout << "近似解是：" << x2 << endl;
	}
	return 0;
}

double equation(double x) {
	double solution;
	solution = x * x - 5 * x + 3;
	return solution;
}

double line(double x0, double x1)
{
	double x2;
	x2 = x0 - (x0 - x1)*equation(x0) / (equation(x0) - equation(1));
	return x2;
}