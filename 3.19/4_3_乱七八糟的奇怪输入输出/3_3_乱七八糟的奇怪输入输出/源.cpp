#include<iostream>
using namespace std;
int main()
{
	int N;	//输入整数的次数
	int a;	//临时变量
	int plus=0, minus=0, zero=0, m_sum=0, p_sum=0;	//负数的个数、正整数的个数、0的个数、所有负数之和、所有正整数之和
	cout << "请输入N：\n";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << " 请输入一个整数：" << endl;
		cin >> a;
		if (a>0)
		{
			plus++;
			p_sum = p_sum + a;
		}
		else {
			if (a == 0) zero++;
			else {
				minus++;
				m_sum = m_sum + a;
			}
		}
	}
	cout << "您输入的数字中，正数的个数是：" << plus << "\n负数的个数是：" << minus << "\n0的个数是：" << zero << "\n正数的和是：" << p_sum << "\n负数的和是：" << m_sum << endl;
	return 0;
}