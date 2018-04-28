#include<iostream>
using namespace std;
int main()
{
	double sum = 0,up = 2,up2, down = 1;
	int   n;	//up为分子 up2为过度暂存 down为分母 sum为总和 n为输入值
	cout << "输入n：" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		sum = sum + up / down;
		up2 = up;
		up = up + down;
		down = up2;
	}
	cout << "求得的和是：" << sum << endl;
	return 0;
}