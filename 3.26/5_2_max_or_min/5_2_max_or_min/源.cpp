#include <iostream>
using namespace std;
int imax(int array[], int count);
int imin(int array[], int count);
int main()
{
	int array[100];
	int count;
	cout << "�������������Ԫ�ظ�����\n";
	cin >> count;
	cout << "�������������:\n";
	for (int i = 0; i < count; i++)
		cin >> array[i];
	int max = imax(array,count);
	int min = imin(array,count);
	cout << "���������ǣ�" << max << endl;
	cout << "��С�������ǣ�" << min << endl;
	return 0;
}

int imin(int array[], int count) 
{
	int min = array[0];
	for (int i = 1; i < count; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}
int imax(int array[], int count)
{
	int max = array[0];
	for (int i = 1; i < count; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}