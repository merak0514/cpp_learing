#include <iostream>
using namespace std;
int main()
{
	int matrix[8][8];
	int sum1 = 0, sum2 = 0;	//��ʾ�������Խ��ߵĺ�
	cout << "�����ǣ�\n";
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			matrix[i][j] = (i + 1)*(j + 1);
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < 8; i++)	//���������Խ��ߵĺͲ����
	{
		sum1 += matrix[i][i];
		sum2 += matrix[i][7 - i];
	}
	cout << "���Խ���Ԫ�صĺ��ǣ�" << sum1 << "\n���Խ���Ԫ�صĺ��ǣ�" << sum2;
	cout << "\n�Ӻͺ��һ�ŵ�ֵ�ǣ�\n";
	for (int i = 0; i < 8; i++)
	{
		matrix[0][i] += sum1;
		cout << matrix[0][i] << "\t";
	}
	return 0;
}