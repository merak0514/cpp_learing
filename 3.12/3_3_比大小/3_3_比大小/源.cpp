#include<iostream>
using namespace std;
int main()
{
	int num,min,input;
	cout << "请输入你要输入比大小的数字的个数：\n";
	cin >> num;
	cout << "输入" << num << "个数字，中间用回车键：\n";
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
	cout << "最小的数字是：" << min << endl;
	return 0;
}
