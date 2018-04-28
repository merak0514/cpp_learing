/*
1.	输入一个总的秒数，转换为相应的时、秒（通过求余完成）
*/
#include <iostream>
using namespace std;
int main()
{
	int time, h,m, s;

	cout << "输入时间：\n";
	cin >> time;

	m = time / 60;
	s = time % 60;
	h = m / 60;

	cout << "相当于：" << h << "时" << m << "分" << s << "秒"<<endl;
}