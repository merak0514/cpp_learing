#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x, y, result;
	cout << "����x��y��\n";
	cin >> x >> y;
	if (cos(abs(x + y)) <= 0)	//�жϷ�ĸ�Ƿ�Ϊ����ͼ�Ը���������
		cout << "wrong!������������" << endl;
	else
	{
		result = (sin(abs(x) + abs(y))) / (sqrt(cos(abs(x + y))));
		cout << "�����Ľ���ǣ�" << result << endl;
	}
}