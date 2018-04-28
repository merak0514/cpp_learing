#include <iostream>
using namespace std;
int fabonaci(int n);
int sum_f(int *pi, int n);
int main()
{
	int n;
	cout << "ÇëÊäÈën£º";
	cin >> n;
	int *num = new int[n + 1];
	for (int i = 0; i < n; i++)
		*(num + i) = fabonaci(i + 1);
	cout << "result = ";
	for (int i = 0; i < n - 1; i++)
		cout << *(num + i) << "^2 + ";
	cout << *(num + n - 1) << "^2 = " << sum_f(num, n) << endl;
	return 0;
}
int fabonaci(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return  1;
	else
		return fabonaci(n - 1) + fabonaci(n - 2);
}
int sum_f(int *pi, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++, pi++)
		sum += (*pi)*(*pi);
	return sum;
}