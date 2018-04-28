#include<iostream>
#include <cmath>
using namespace std;
const double ACCURACY = 1e-7;	//精度
double my_arctg(double x);
double element(double x, int n);	//单项
int main()
{
	double x;
	cout << "请输入-π/2到π/2之间的一个数，计算atan：\n";
	cin >> x;
	double result = my_arctg(x);
	cout << "使用我的程序算出来的结果是：" << result << endl;
	cout << "使用自带函数算出来的是：" << atan(x) << endl;
	return 0;
}
double my_arctg(double x)
{
	double myatan = 0;
	for (int n = 1; abs(element(x, n)) > ACCURACY; n++)	//未达到精度时一直加上单项
		myatan += element(x, n);
	return myatan;
}
double element(double x, int n)
{
	double result;
	result = pow(-1, n - 1)*pow(x, 2 * n - 1) / (2 * n - 1);
	return result;
}