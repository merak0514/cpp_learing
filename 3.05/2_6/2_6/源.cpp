#include<iostream>
#include<cmath>
#include<Windows.h>
#include<ctime>
using namespace std;
int main()
{
	int M, N;
	srand(time(NULL));	//根据时间生成随机因子
	N = rand();
	M = N % 10;	//模10
	if ((N%2)==0)
	{
		cout << "N= " << N << "，是偶数" << endl;
		for (int i = 0; i < 4; i++)
		{
			Sleep(5000 / (M + 1));
			cout << '\007'<<"biiii\n";	//辅助输出，每次输出说明响了一声
		}
	}
	else
	{
		cout << "N= " << N << "，是奇数" << endl;
		for (int i = 0; i < 5; i++)
		{
			Sleep(5000 / M);
			cout << '\007'<<"biii\n";	//辅助输出，每次输出说明响了一声
		}
	}
}