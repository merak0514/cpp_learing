#include<iostream>
using namespace std;
void  selectsort(int *array, int n);
int main()
{
	int list[6] = { 2,7,2,2,3,1 };
	selectsort(list, 6);
	cout << "The result is:" << endl;
	for (int i = 0; i < 6; i++)    cout << list[i] << "   ";
	cout << endl;
	return 0;
}

void  selectsort(int *array, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		int k = i;     //�ȼ�¼���Ԫ�ص��±�
		for (int j = i - 1; j >= 0; j--)
			if (*(array + j) > *(array + k)) k = j;  //�ȼ�¼�±�
		if (k != i)   //�����������Ԫ�أ��ٽ���
		{
			int tmp = *(array + i);
			*(array + i) = *(array + k);
			*(array + k) = tmp;
		}
	}

}