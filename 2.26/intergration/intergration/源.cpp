#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	double sum = 0, h,x,left,right, a = -1, b = 1, step;
	cout << "��������Ҫ�ľ��ȣ��ָ���������";
	cin >> step;
	h = ((b - a)/step);	//����С���䳤��
	for (int i = 0; i < step + 1; i++)	//ѭ��step��
	{
		x = (a + i * h);
		left = sin(x) + exp(x);
		right = sin(x) + exp(x);
		sum = sum + (left + right)*h / 2;
	}
	cout << "��������" << sum << endl;
	return 0;
}