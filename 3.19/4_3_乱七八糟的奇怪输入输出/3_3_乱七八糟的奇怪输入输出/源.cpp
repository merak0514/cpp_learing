#include<iostream>
using namespace std;
int main()
{
	int N;	//���������Ĵ���
	int a;	//��ʱ����
	int plus=0, minus=0, zero=0, m_sum=0, p_sum=0;	//�����ĸ������������ĸ�����0�ĸ��������и���֮�͡�����������֮��
	cout << "������N��\n";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << " ������һ��������" << endl;
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
	cout << "������������У������ĸ����ǣ�" << plus << "\n�����ĸ����ǣ�" << minus << "\n0�ĸ����ǣ�" << zero << "\n�����ĺ��ǣ�" << p_sum << "\n�����ĺ��ǣ�" << m_sum << endl;
	return 0;
}