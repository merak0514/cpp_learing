#include<iostream>
#include<cmath>
using namespace std;
unsigned int i = 1,type;
double factorial = 1;	//需保证可容纳大小足够大
/*
以下三个函数区别仅仅在于初始化变量N
*/
int char_type() 
{
	char N = 1;
	while (N == factorial)
	{
		N = N * i;
		factorial = factorial * i;
		i++;
	}
	return (i - 2);
}
int short_type()
{
	short N = 1;
	while (N == factorial)
	{
		N = N * i;
		factorial = factorial * i;
		i++;
	}
	return (i - 2);
}
int int_type()
{
	unsigned int N = 1;
	while (N == factorial)
	{
		N = N * i;
		factorial = factorial * i;
		i++;
	}
	return (i - 2);
}
int main()	//由用户输入的数据类型调用函数
{
	cout<<"输入你要运行的数据类型代号（1. 字符变量；2. 短整形变量；3. 整形变量）：\n";
	cin >> type;
	switch (type)
	{
	case 1:
		cout << "最大的N=" << char_type() << endl;
		break;
	case 2:
		cout << "最大的N=" << short_type() << endl;
		break;
	case 3:
		cout << "最大的N=" << int_type() << endl;
		break;
	default:
		cout << "检查你的输入！！" << endl;
		break;
	}
}