#include<iostream>
#include<cmath>
using namespace std;
/*
该程序使用数组效果更好
*/
int  main()
{
	unsigned int fodd = 0, feven=1,sum = 0,n,selected;	//设初始fodd=1,feven=1

	cout << "输入n:\n";
	cin >> n;
	if (n >=3)
	{
		for (unsigned int i = 0; i < n - 3; i = i + 2)	//此处使用i<n-3，所以后文n<3时需要特殊处理
		{
			sum = sum + fodd + feven;	//总和增加奇数项和偶数项
			fodd = fodd + feven;	//新的奇数
			feven = fodd + feven;	//新的偶数
		}
		sum = sum + fodd + feven;	//最后多加一次
		selected = feven;
	}
	/*
	特殊处理
	*/
	if (n == 1) selected = 0;
	if (n == 2)
	{
		selected = 1;
		sum = 1;
	}
	/*
	奇数多加一次
	*/
	if (n % 2 == 1 && n!=1 && n!=2)
	{
		fodd = feven + fodd;
		sum = sum + fodd;
		selected = fodd;
	}
	cout << "你选择的是: " << selected << "\n计算得到的总和是: " << sum << endl;
	return 0;
}