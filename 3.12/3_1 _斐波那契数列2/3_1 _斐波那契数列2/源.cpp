#include<iostream>
using namespace std;
int main()
{
	int n, sum=1;
	cout << "输入n：\n";
	cin >> n;

	int array[10000];
	array[0] = 0;
	array[1] = 1;

	for (int i = 2; i < n; i++)
	{
		array[i] = array[i - 1] + array[i - 2];
		sum = sum + array[i];
	}
	cout << "第"<<n<<"个数是：" << array[n-1] << endl;
	cout << "总和是：" << sum << endl;
}