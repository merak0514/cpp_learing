#include <iostream>
#include<cmath>
using namespace std;
double calculate(double x, int n);
double arcsin(double x, int accuracy);
int main()
{
	int accuracy = 10;
	double x, iasin;
	cout << "请输入x：\n";
	cin >> x;
	iasin = arcsin(x,accuracy);
	cout << "我的程序得到的arcsinx是：" << iasin << endl;
	double diff = abs(iasin - asin(x));
	cout << "与标准库相差：" << diff << endl;
	return 0;
}
double arcsin(double x,int accuracy)
{
	double arcsin;
	arcsin = x;
	for (int n = 1; n < accuracy; n++)
		arcsin += calculate(x, n);
	return arcsin;
}
double calculate(double x, int n)
{
	double factorial_n=1, factorial_2n=1;
	for (int i = 1; i <= 2 * n; i++)
	{
		factorial_2n *= i;
		if (i == n)
			factorial_n = factorial_2n;
	}
	double result = (factorial_2n * pow(x, 2 * n + 1))/(pow(2,2*n)*factorial_n*factorial_n*(2*n+1));
	return result;
}