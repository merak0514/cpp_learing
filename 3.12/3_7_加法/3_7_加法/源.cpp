#include<iostream>
#include<time.h>
#include<cmath>
using namespace std;
int main()
{
	int a, b, sum, input;	//a��bΪ�������sumΪ�ͣ�inputΪ�û�����
	srand(time(NULL));
	a = rand() % 100;
	b = rand() % 100;
	sum = a + b;
	do
	{
		cout << "�����" << a << " + " << b << " = ?" << endl;
		cin >> input;
		if (sum != input) cout << "�����������һ��\n";
	} while (sum != input);
	cout << "��ϲ������\n";
	return 0;
}