#include <iostream>
using namespace std;
int main()
{
	int matrix[8][8];
	int sum1 = 0, sum2 = 0;	//表示主、副对角线的和
	cout << "矩阵是：\n";
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			matrix[i][j] = (i + 1)*(j + 1);
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < 8; i++)	//计算主副对角线的和并输出
	{
		sum1 += matrix[i][i];
		sum2 += matrix[i][7 - i];
	}
	cout << "主对角线元素的和是：" << sum1 << "\n副对角线元素的和是：" << sum2;
	cout << "\n加和后第一排的值是：\n";
	for (int i = 0; i < 8; i++)
	{
		matrix[0][i] += sum1;
		cout << matrix[0][i] << "\t";
	}
	return 0;
}