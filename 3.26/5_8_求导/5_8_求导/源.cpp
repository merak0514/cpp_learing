#include<iostream>
#include<cmath>
using namespace std;
double dxs(double a[], double x, int n);
double dxsds(double a[], double x, int n);
int main()
{
	double a[100];
	return 0;
}
double dxs(double a[], double x, int n)
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
		sum = sum + a[i] * pow(x, i);
	return sum;
}
double dxsds(double a[], double x, int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + a[i] * pow(x, i - 1)*i;
	return sum;
}
