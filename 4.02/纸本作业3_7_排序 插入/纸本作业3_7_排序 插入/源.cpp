#include <iostream>
using namespace std;
int main()
{
	int array[101];
	int temp;
	cout << "请输入插入整数的个数(不大于100)：";
	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cout << "请输入第" << i + 1 << "个插入整数：";
		cin >> temp;
		if (i == 0)		//等于1特殊情况特殊处理
		{
			array[0] = temp;
		}

		cout << temp << endl;
		cout << i;
		if (temp > array[i - 1])	//新插入的是最大值
			array[i] = temp;
		else
		{
			for (int j = 0; j <= i - 1; j++)
			{
				if (temp < array[j])	 //找到插入的坐标j
				{
					for (int k = i - 1; k >= j; k--)	//j坐标之后的所有数字坐标+1
						array[k + 1] = array[k];
					array[j] = temp;
					break;
				}
			}
		}
		cout << "数组有序元素为：";

		for (int m = 0; m <= i; m++)
			cout << array[m] << ' ';
		cout << endl;
	}

	return 0;
}