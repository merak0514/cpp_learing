#include <iostream>
using namespace std;
int main()
{
	int array[101];
	int temp;
	cout << "��������������ĸ���(������100)��";
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cout << "�������" << i + 1 << "������������";
		cin >> temp;
		if (i == 0)		//����1����������⴦��
		{
			array[0] = temp;
		}

		cout << temp << endl;
		cout << i;
		if (temp > array[i - 1])	//�²���������ֵ
			array[i] = temp;
		else
		{
			for (int j = 0; j <= i - 1; j++)
			{
				if (temp < array[j])	 //�ҵ����������j
				{
					for (int k = i - 1; k >= j; k--)	//j����֮���������������+1
						array[k + 1] = array[k];
					array[j] = temp;
					break;
				}
			}
		}
		cout << "��������Ԫ��Ϊ��";

		for (int m = 0; m <= i; m++)
			cout << array[m] << ' ';
		cout << endl;
	}

	return 0;
}