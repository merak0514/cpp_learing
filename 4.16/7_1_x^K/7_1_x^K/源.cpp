#include <iostream>
using namespace std;
double xk(double x, int k);
int main()
{
	cout << "������x��";
	double x;
	cin >> x;
	cout << "������k��";
	int k;
	cin >> k;
	double result = xk(x, k);
	cout << result << endl;
	return 0;
}
double xk(double x, int k)
{
	if (k == 0)
		return 1;
	else
		return x*xk(x,k-1);
}