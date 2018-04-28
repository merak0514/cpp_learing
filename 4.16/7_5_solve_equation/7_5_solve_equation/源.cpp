#include <iostream>
#include <cmath>
using namespace std;
const double ACCURACY = 1e-6;
double fun(double *xs, const int COUNT, double x);
double dfun(double *xs, const int COUNT, double x);
double solution(double *xs, const int COUNT, double x);
int main()
{
	int count;	//方程阶数
	cout << " 输入你要计算方程的阶数：";
	cin >> count;
	double *xs = new double[count + 1];	//系数数组长度为阶数+1
	if (xs == 0 || count <= 0)	//检验是否成功申请内存
	{
		cout << "ERROR" << endl;
		return -1;
	}
	cout << "请输入系数:";
	for (int i = 0; i <= count; i++)
		cin >> *(xs + i);
	cout << "请输入近似值:";
	int a;
	cin >> a;
	//	for (int i = 0; i <= count; i++)
	//		cout <<*(xs + i);
	for (int i = 0; i < count; i++)
	{
		cout << *(xs + i) << "x^" << count - i << "+";
	}
	cout << *(xs + count) << "=0" << endl;
	cout << "方程的近似解是：" << solution(xs, count, a) << endl;
	return 0;
}
double fun(double *xs, const int COUNT, double x)	//返回f（x）的值
{
	double result = 0;
	for (int i = 0; i <= COUNT; i++)
		result += *(xs + i)*pow(x, COUNT - i);
	return result;
}
double dfun(double *xs, const int COUNT, double x)	//返回f导数的值
{
	double result = 0;
	for (int i = 0; i < COUNT; i++)
		result += *(xs + i)*pow(x, COUNT - i - 1);
	return result;
}
double solution(double *xs, const int COUNT, double x)
{
	if (abs(fun(xs, COUNT, x - fun(xs, COUNT, x) / dfun(xs, COUNT, x))) < ACCURACY || abs(x - fun(xs, COUNT, x) / dfun(xs, COUNT, x) - x) < ACCURACY)
		return x;
	else
	{
		x = x - fun(xs, COUNT, x) / dfun(xs, COUNT, x);
		return solution(xs, COUNT, x);
	}
}
