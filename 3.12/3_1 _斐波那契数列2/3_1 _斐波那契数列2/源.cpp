#include<iostream>
using namespace std;
int main()
{
	int n, sum=1;
	cout << "����n��\n";
	cin >> n;

	int array[10000];
	array[0] = 0;
	array[1] = 1;

	for (int i = 2; i < n; i++)
	{
		array[i] = array[i - 1] + array[i - 2];
		sum = sum + array[i];
	}
	cout << "��"<<n<<"�����ǣ�" << array[n-1] << endl;
	cout << "�ܺ��ǣ�" << sum << endl;
}