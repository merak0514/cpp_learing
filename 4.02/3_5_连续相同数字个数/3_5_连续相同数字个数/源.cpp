#include <iostream>
#include<cmath>
using namespace std;
int count(int m);
unsigned num_len(int x);
int main()
{
	int m;
	cout << " ������������֣�" << endl;
	cin >> m;
	cout << "������" << count(m) << "����ͬ����" << endl;
	return 0;
}
int count(int m)
{
	int array[50];
	int count = 1;
	int temp1 = 0, temp2 = 0;
	int i;
	int len = num_len(m);
	for (i = 0; i < len; i++)
	{
		array[i] = m / (int)pow(10, len - i - 1);
		m = m % (int)pow(10, len - i - 1);
		if (i != 0 && array[i] != array[i - 1])
			break;
	}
	return i;
}
unsigned num_len(int x)	//����λ��
{
	int len = 0;
	while (x > 0)
	{
		x /= 10;
		len++;
	}
	return len;
}