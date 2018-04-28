#include <iostream>
#include<string.h>
using namespace std;
int panduan(char ccc[]);
int main()
{
	char mychar[100];
	cout << "请输入你要判断的字符串：\n";
	cin.get(mychar, 99);
	cout << "您输入的字符串对称性为(对称为1；不对称为0)：" << panduan(mychar)<<endl;
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