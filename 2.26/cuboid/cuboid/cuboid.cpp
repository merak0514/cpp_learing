#include<iostream>
using namespace std;
int main()
{
	float h, w, l;
	cout << "�������볤��ߣ�";
	cin >> h >> w >> l;
	cout << "���Ϊ��" << h * w * l << endl << "�����Ϊ��" << 2 * (h*w + h * l + w * l) << endl;
	return 0;
}