#include <iostream>
using namespace std;
bool isprime(int a);
int main()
{
	int n;
	cout << "请输入你要输入的数字个数n：\n";
	cin >> n;
	int array[100];
	cout << "输入要判断的数字：\n";
	for (int i = 0; i < n; i++)
		cin >> array[i];
	cout << "其中的素数有：\n";
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