#include <iostream>
#include <cmath>
using namespace std;
const double ACCURACY = 1e-6;
double fun(double *xs, const int COUNT, double x);
double dfun(double *xs, const int COUNT, double x);
double solution(double *xs, const int COUNT, double x);
int main()
{
	int count;	//���̽���
	cout << " ������Ҫ���㷽�̵Ľ�����";
	cin >> count;
	double *xs = new double[count + 1];	//ϵ�����鳤��Ϊ����+1
	if (xs == 0 || count <= 0)	//�����Ƿ�ɹ������ڴ�
	{
		cout << "ERROR" << endl;
		return -1;
	}
	cout << "������ϵ��:";
	for (int i = 0; i <= count; i++)
		cin >> *(xs + i);
	cout << "���������ֵ:";
	int a;
	cin >> a;
	//	for (int i = 0; i <= count; i++)
	//		cout <<*(xs + i);
	for (int i = 0; i < count; i++)
	{
		cout << *(xs + i) << "x^" << count - i << "+";
	}
	cout << *(xs + count) << "=0" << endl;
	cout << "���̵Ľ��ƽ��ǣ�" << solution(xs, count, a) << endl;
	return 0;
}
double fun(double *xs, const int COUNT, double x)	//����f��x����ֵ
{
	double result = 0;
	for (int i = 0; i <= COUNT; i++)
		result += *(xs + i)*pow(x, COUNT - i);
	return result;
}
double dfun(double *xs, const int COUNT, double x)	//����f������ֵ
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
