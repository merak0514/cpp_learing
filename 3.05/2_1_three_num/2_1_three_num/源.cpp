#include <iostream>
#include <cmath>
using namespace std;
int double2int(double num_double)	//�����������뺯��
{
	int num_int;
	if (int(num_double) == int(num_double + 0.5))	//��+0.5������ֺ�ԭʼ������ͬ�������ᡱ
		num_int = int(num_double);
	else	//�������ᡱ
		num_int = int(num_double + 1);
	return num_int;	
}
int main() 
{
	float a, b, c, sum;
	int sum_int;
	cout << "����������С����";	//����
	cin >> a >> b >> c;
	cout << "��������ǣ�\n" << a<<'\n' << b<<'\n' << c<<'\n';	//���a��b��c
	sum = a + b + c;	//���
	cout << "�������ֵĺ��ǣ�" << sum<<endl;	//�����
	sum_int = double2int(sum);
	cout << "���������Ϊ��" << sum_int << endl;
	return 0;
}