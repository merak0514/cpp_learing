#include<iostream>
using namespace std;
int main()
{
	double array[16]{ 456,12,0.5,803,57.5,15.3,23.5,12.5,62.5,1,0,4,2,3,1.7,3.5 };	//���飺16������
	double tmp;	//��ʱ��������
	cout << "ԭ�ȵ������ǣ�\n";
	for (int i = 0; i < 16; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
	
	for (int j = 0; j < 16; j++)
	{
		for (int k = 0; k < 16; k++)
		{
			if (array[k] < array[j] && j < k)
			{
				tmp = array[k];
				array[k] = array[j];
				array[j] = tmp;
			}
		}
	}
	cout << "ת����������ǣ�\n";
	for (int i = 0; i < 16; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
	return 0;
}