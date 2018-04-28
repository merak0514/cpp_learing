#include<iostream>
#include <cmath>
using namespace std;
const double ACCURACY = 1e-7;	//����
double my_arctg(double x);
double element(double x, int n);	//����
int main()
{
	double x;
	cout << "������-��/2����/2֮���һ����������atan��\n";
	cin >> x;
	double result = my_arctg(x);
	cout << "ʹ���ҵĳ���������Ľ���ǣ�" << result << endl;
	cout << "ʹ���Դ�������������ǣ�" << atan(x) << endl;
	return 0;
}
double my_arctg(double x)
{
	double myatan = 0;
	for (int n = 1; abs(element(x, n)) > ACCURACY; n++)	//δ�ﵽ����ʱһֱ���ϵ���
		myatan += element(x, n);
	return myatan;
}
double element(double x, int n)
{
	double result;
	result = pow(-1, n - 1)*pow(x, 2 * n - 1) / (2 * n - 1);
	return result;
}