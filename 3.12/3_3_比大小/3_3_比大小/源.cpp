#include<iostream>
using namespace std;
int main()
{
	int num,min,input;
	cout << "��������Ҫ����ȴ�С�����ֵĸ�����\n";
	cin >> num;
	cout << "����" << num << "�����֣��м��ûس�����\n";
	cin >> input;
	min = input;
	for (int i = 1; i < num; i++)
	{
		cin >> input;
		if (input<min)
		{
			min = input;
		}
	}
	cout << "��С�������ǣ�" << min << endl;
	return 0;
}
