#include<iostream>
using namespace std;
int main()
{
	cout << "��ʼ����" << endl;
	int sum = 0, a, b, c;	//sumΪ��������a��b��c�ֱ�Ϊ��λ����
	for (int i = 100; i < 1000; i++)
	{
		a = i / 100;
		b = (i - a * 100) / 10;
		c = i - a * 100 - b * 10;
		//cout <<i<< a << b << c<<endl;
		if (a*a*a + b * b*b + c * c*c == i)
		{
			sum = sum + i;
		}
	}
	cout << "ˮ�ɻ������ܺ��ǣ�" << sum << endl;
	return 0;
}