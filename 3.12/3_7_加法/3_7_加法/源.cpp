#include<iostream>
#include<time.h>
#include<cmath>
using namespace std;
int main()
{
	int a, b, sum, input;	//a、b为随机数，sum为和，input为用户输入
	srand(time(NULL));
	a = rand() % 100;
	b = rand() % 100;
	sum = a + b;
	do
	{
		cout << "请计算" << a << " + " << b << " = ?" << endl;
		cin >> input;
		if (sum != input) cout << "计算错误，再来一次\n";
	} while (sum != input);
	cout << "恭喜你答对了\n";
	return 0;
}