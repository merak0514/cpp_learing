#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	double sum = 0, h,x,left,right, a = -1, b = 1, step;
	cout << "输入你想要的精度（分割数量）：";
	cin >> step;
	h = ((b - a)/step);	//计算小区间长度
	for (int i = 0; i < step + 1; i++)	//循环step次
	{
		x = (a + i * h);
		left = sin(x) + exp(x);
		right = sin(x) + exp(x);
		sum = sum + (left + right)*h / 2;
	}
	cout << "计算结果：" << sum << endl;
	return 0;
}