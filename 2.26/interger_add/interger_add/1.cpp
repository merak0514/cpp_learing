#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "����a��b��";
	cin >> a >> b;
	if (a < 100 & b < 100 & a>10 & b>10)
		if (a < b)
			cout << "ƴ�Ӻ������Ϊ��" << b * 100 + a<<endl;
		else
			cout << "ƴ�Ӻ������Ϊ��" << a * 100 + b << endl;
	else
		cout << "�������\n";
	return 0;
}