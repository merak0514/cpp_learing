#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int	num, a, b, c, d,result;
	cout << "������һ����λ����\n";
	cin >> num;
	if ((num > 9999) | (num < 1000))	//��������λ��������
		cout << "��������\n";
	else
	{
		a = num / 1000;	//�������зֱ���ÿһλ����
		b = (num - 1000 * a) / 100;
		c = (num - 1000 * a - 100 * b) / 10;
		d = (num - 1000 * a - 100 * b - 10 * c);
		result = a * a*a + b * b*b + c * c*c + d * d*d;
		cout << "������Ľ���ǣ�" << a * a*a << '+' << b * b*b << '+' << c * c*c << '+' << d * d*d << '=' << result << endl;
	}
	return 0;
}