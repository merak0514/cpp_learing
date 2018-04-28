#include<iostream>
using namespace std;
int main()
{
	float h, w, l;
	cout << "依次输入长宽高：";
	cin >> h >> w >> l;
	cout << "体积为：" << h * w * l << endl << "表面积为：" << 2 * (h*w + h * l + w * l) << endl;
	return 0;
}