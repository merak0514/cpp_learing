#include<iostream>
using namespace std;
int main()
{
	double sum = 0,up = 2,up2, down = 1;
	int   n;	//upΪ���� up2Ϊ�����ݴ� downΪ��ĸ sumΪ�ܺ� nΪ����ֵ
	cout << "����n��" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		sum = sum + up / down;
		up2 = up;
		up = up + down;
		down = up2;
	}
	cout << "��õĺ��ǣ�" << sum << endl;
	return 0;
}