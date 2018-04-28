#include <iostream>
#include <cmath>
using namespace std;
int double2int(double num_double)	//构建四舍五入函数
{
	int num_int;
	if (int(num_double) == int(num_double + 0.5))	//若+0.5后的数字和原始数字相同，则“四舍”
		num_int = int(num_double);
	else	//否则“五舍”
		num_int = int(num_double + 1);
	return num_int;	
}
int main() 
{
	float a, b, c, sum;
	int sum_int;
	cout << "请输入三个小数：";	//输入
	cin >> a >> b >> c;
	cout << "您输入的是：\n" << a<<'\n' << b<<'\n' << c<<'\n';	//输出a，b，c
	sum = a + b + c;	//求和
	cout << "三个数字的和是：" << sum<<endl;	//输出和
	sum_int = double2int(sum);
	cout << "四舍五入后为：" << sum_int << endl;
	return 0;
}