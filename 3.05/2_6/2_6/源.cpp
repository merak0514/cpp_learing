#include<iostream>
#include<cmath>
#include<Windows.h>
#include<ctime>
using namespace std;
int main()
{
	int M, N;
	srand(time(NULL));	//����ʱ�������������
	N = rand();
	M = N % 10;	//ģ10
	if ((N%2)==0)
	{
		cout << "N= " << N << "����ż��" << endl;
		for (int i = 0; i < 4; i++)
		{
			Sleep(5000 / (M + 1));
			cout << '\007'<<"biiii\n";	//���������ÿ�����˵������һ��
		}
	}
	else
	{
		cout << "N= " << N << "��������" << endl;
		for (int i = 0; i < 5; i++)
		{
			Sleep(5000 / M);
			cout << '\007'<<"biii\n";	//���������ÿ�����˵������һ��
		}
	}
}