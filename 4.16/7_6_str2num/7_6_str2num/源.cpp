#include <iostream>
#include<cmath>
using namespace std;
double myatof(char *num);
int main()
{
	cout << "输入你的数字：" << endl;
	char input[100];
	cin.get(input, 99);
	double result = myatof(input);
	cout << result << endl;
	return 0;
}
double myatof(char *num)
{
	int sign;
	switch (*num)	//判断符号
	{
	case '+':
		sign = 1;
		break;
	case '-':
		sign = -1;
		break;
	default:
		cout << "输入错误！";
		return -1;
	}
	num++;
	int count = -1;	//计算小数点后有几位的标识符，在小数点处会被激活
	double sum = 0;
	while (*num != 0)
	{
		if (*num == '.')
		{
			//flag = -1;
			count = 0;	//激活
			num++;
			continue;
		}
		if (count != -1) count++;	//计算小数点后的位数
		sum *= 10;
		sum += (*num - 48);
		num++;
	}
	(sum *= pow(10, -count)) *= sign;
	return sum;
}