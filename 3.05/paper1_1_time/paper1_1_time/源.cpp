/*
1.	����һ���ܵ�������ת��Ϊ��Ӧ��ʱ���루ͨ��������ɣ�
*/
#include <iostream>
using namespace std;
int main()
{
	int time, h,m, s;

	cout << "����ʱ�䣺\n";
	cin >> time;

	m = time / 60;
	s = time % 60;
	h = m / 60;

	cout << "�൱�ڣ�" << h << "ʱ" << m << "��" << s << "��"<<endl;
}