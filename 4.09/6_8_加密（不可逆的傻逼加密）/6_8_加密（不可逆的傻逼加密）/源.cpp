#include <iostream>
using namespace std;
char *jiami(char *mingwen);
int length(char *x);
int main()
{
	char input[100];
	cout << "请输入密文：\n";
	cin.get(input, 99);
	char *mingwen = input;
	char *miwen = jiami(input);

	while (*miwen != 0)
	{
		cout << *miwen;
		miwen++;
	}

	return 0;
}
char *jiami(char *mingwen)
{
	int len = length(mingwen);
	char *miwen = new char[len + 1];
	int even = len / 2;
	int odd = len - even;
	for (int i = 0; i < len / 2; i++)
	{
		*(miwen + len - 1 - i) = *(mingwen + i * 2);	//奇书位
		*(miwen + even - 1 - i) = *(mingwen + 2 * i + 1);	//偶数位
	}
	if (len % 2 != 0)
		*(miwen + even) = *(mingwen + len - 1);	//奇数时最后一位特殊处理
	*(miwen + len) = 0;
	return miwen;
}
int length(char *x)
{
	int count = 0;
	while (*x++ != 0)
		count++;
	return count;
}
