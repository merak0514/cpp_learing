#include <iostream>
#include<string.h>
using namespace std;
int panduan(char ccc[]);
int main()
{
	char mychar[100];
	cout << "��������Ҫ�жϵ��ַ�����\n";
	cin.get(mychar, 99);
	cout << "��������ַ����Գ���Ϊ(�Գ�Ϊ1�����Գ�Ϊ0)��" << panduan(mychar)<<endl;
	return 0;
}
int panduan(char ccc[])
{
	unsigned char_len = strlen(ccc);
	for (int i = 0; i < char_len/2; i++)
	{
		if (ccc[i] != ccc[char_len - 1-i])
			return 0;
	}
	return 1;
}