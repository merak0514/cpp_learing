#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x;
	cout << "�������֣�";
	cin >> x;
	if ((x*x - 3 * x + 2) <= 0)
		cout << "����\n";
	else
		cout << "�ó��Ľ���ǣ�" << x / sqrt((x*x - 3 * x + 2))<<endl;
}