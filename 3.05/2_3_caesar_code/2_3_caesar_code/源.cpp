#include<iostream>
using namespace std;
int main()
{
	char ch1, ch2, ch3;
	cout << "输入三个字母：" << endl;
	cin >> ch1 >> ch2 >> ch3;
	ch1 += 5;
	ch2 += 5;
	ch3 += 5;
	cout << "转码后的结果为：" << ch1 <<' '<< ch2 << ' ' << ch3<<endl;
	return 0;
}