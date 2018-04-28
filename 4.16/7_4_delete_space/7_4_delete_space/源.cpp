#include <iostream>
using namespace std;
char *myltrim(char *string);
int main()
{
	cout << "输入字符串：" << endl;
	char input[100];
	cin.get(input, 99);
	char *output = myltrim(input);
	while (*output != 0)
	{
		cout << *output;
		output++;
	}
	cout << endl;
	return 0;
}
char *myltrim(char *string)
{
	char *temp = string;
	char *INPUT = string;
	int count = 0;
	while (*temp == ' ') temp++;	//找到不为空格的位置
	while ((*string++ = *temp++) != 0);	//复制字符串
	return INPUT;
}