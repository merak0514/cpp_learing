#include <iostream>
using namespace std;
int length(int x);
int main()
{
	int n,i;
	cout << "请输入数字：" << endl;
	cin >> n;
	int* nump = new int[length(n)%3==0? length(n)/3+1:length(n)/3+2];
	for (i = 0; n > 0; i++,n/=1000)
		nump[i] = n % 1000;
	for (int j = 1; j < i; j++)	//输出
		cout << nump[i - j] << ",";
	cout << nump[0];	//输出最后一位（不带，）
	return 0;
}
int length(int x)	//判断几位数
{
	int i;
	for (i = 0; x > 0; i++, x /= 10);
	return i;
}