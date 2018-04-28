#include <iostream>
using namespace std;
int main()
{
	cout << "请输入m和n：" << endl;
	int m, n;
	cin >> m >> n;
	if (m > n)
	{
		cout << "m should be less than n" << endl;
		return 0;
	}
	for (int origin_num = m; origin_num <= n; origin_num++)
	{
		cout << origin_num << "的平凡因子有：";
		for (int j = 2; j <origin_num; j++)
		{
			if (origin_num%j == 0)
				cout << j << '\t';
		}
		cout << endl;
	}
	return 0;
}
