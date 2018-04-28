#include <iostream>
using namespace std;
#define SIZE 7
struct Number
{
	int num;
	int freq;
};
int whereIn(Number array[], int x);	//返回数字所在的下标；数字不存在返回-1；
int main()
{
	Number number[SIZE*2],number1[SIZE],number2[SIZE];
	cout << "请输入第一个数组：\n";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> number1[i].num;
		number[i].num = number1[i].num;
		number[i].freq = 1;
	}

	cout << "请输入第二个数组：\n";
	int j = 7;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> number2[i].num;
		if (whereIn(number, number2[i].num) != -1)
			number[whereIn(number, number2[i].num)].freq++;
		else
		{
			number[j].num = number2[i].num;
			number[j].freq = 1;
			j++;
		}
	}

	for (int i = 0; i < j; i++)
		if(number[i].freq==1)
			cout << number[i].num<<'\t';
	return 0;
}
int whereIn(Number array[], int x)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (array[i].num == x)
			return i;		
	}
	return -1;
}