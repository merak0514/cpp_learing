#include <iostream>
#include<cmath>
using namespace std;
double myatof(char *num);
int main()
{
	cout << "����������֣�" << endl;
	char input[100];
	cin.get(input, 99);
	double result = myatof(input);
	cout << result << endl;
	return 0;
}
double myatof(char *num)
{
	int sign;
	switch (*num)	//�жϷ���
	{
	case '+':
		sign = 1;
		break;
	case '-':
		sign = -1;
		break;
	default:
		cout << "�������";
		return -1;
	}
	num++;
	int count = -1;	//����С������м�λ�ı�ʶ������С���㴦�ᱻ����
	double sum = 0;
	while (*num != 0)
	{
		if (*num == '.')
		{
			//flag = -1;
			count = 0;	//����
			num++;
			continue;
		}
		if (count != -1) count++;	//����С������λ��
		sum *= 10;
		sum += (*num - 48);
		num++;
	}
	(sum *= pow(10, -count)) *= sign;
	return sum;
}