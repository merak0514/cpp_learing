#include <iostream>
using namespace std;
int main()
{
	double A[4][4] = { {31.5,333,10,2},{1,2,3,4},{3,4,5,6},{4,5,6,10.35} };	//初始矩阵
	double B[4][4];	//转置后矩阵
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			B[i][j] = A[j][i];
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "若是希望输入的矩阵与原始不同，可返回原函数改变" << endl;
	return 0;
}