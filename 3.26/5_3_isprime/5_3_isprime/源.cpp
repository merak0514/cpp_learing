#include <iostream>
using namespace std;
bool isprime(int a);
int main()
{
	int n;
	cout << "��������Ҫ��������ָ���n��\n";
	cin >> n;
	int array[100];
	cout << "����Ҫ�жϵ����֣�\n";
	for (int i = 0; i < n; i++)
		cin >> array[i];
	cout << "���е������У�\n";
	for (int i = 0; i < n; i++)
	{
		if (isprime(array[i]))
			cout << array[i] << endl;
	}
	return 0;
}
bool isprime(int a) 
{
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}