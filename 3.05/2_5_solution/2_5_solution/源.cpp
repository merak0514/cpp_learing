#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, d, e, f, x, y;
	cout << "�����������֣���Ϊ��������������֣�\n";
	cin >> a >> b >> c >> d >> e >> f;
	cout << '\t' << a << "x + " << b << "y = " << c << endl;	//���������
	cout << '\t' << d << "x + " << e << "y = " << f << endl;
	if ((a / d) == (b / e))	//�ж��������Ƿ�ƽ��
	{
		if ((a / d) == (c / f))	//��ƽ�У��Ƿ��غϣ�
		{
			cout << "����������" << endl;	//�غ�
		}
		else
		{
			cout << "�޽�" << endl;	//ƽ�в��غ�
		}
	}
	else	//�������
	{
		y = (f - c * d / a) / (e - b * d / a);
		x = (f - e * y) / d;
		cout << "�����뷽�̼���Ľ���ǣ�x= " << x << ",y= " << y << endl;
	}
	return 0;
}