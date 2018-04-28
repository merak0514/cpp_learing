#include<iostream>
using namespace std;
int const SIZE = 3;	//矩阵宽度
bool is_symmetrical(int matrix[]);
int main()
{
	int matrix[9] = { 0,2,8,2,1,7,31,2,9 };

	for (int i = 0; i < SIZE; i++)	//output matrix
	{
		for (int j = 0; j <SIZE; j++)
			cout << matrix[SIZE * i + j]<<'\t';
		cout << endl;
	}
	cout << "判断该矩阵是否是对称矩阵（0代表不是；1代表是）：" << is_symmetrical(matrix)<<endl;

	for (int i = 0; i < SIZE; i++)
		matrix[SIZE*i+i] += matrix[SIZE*i + SIZE - i-1];
	cout << "转换完的矩阵：" << endl;
	for (int i = 0; i < SIZE; i++)	//output matrix
	{
		for (int j = 0; j <SIZE; j++)
			cout << matrix[SIZE * i + j] << '\t';
		cout << endl;
	}

	return 0;
}
bool is_symmetrical(int matrix[])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (matrix[SIZE * i + j] != matrix[SIZE * j + i])
				return false;
		}
	}
	return true;
}