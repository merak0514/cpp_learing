#include<iostream>
using namespace std;
int main()
{
	float h, w, l;
	cout << "�������볤��ߣ�";
	cin >> h >> w >> l;
	cout << "���Ϊ��" << h * w * l << '\n ' << "�����Ϊ��" << 2 * (h*w + h * l + w * l);
	return 0;
}