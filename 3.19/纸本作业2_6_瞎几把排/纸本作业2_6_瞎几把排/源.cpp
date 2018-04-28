#include <iostream>
using namespace std;
char changed[] = "IRANCXDEFGHJLYMOSQBUVTWZKPpkzwvutbsqomyljhgfedxcnari";
char letter_position(char a);
int main()
{
	char input[100];
	cout << "请输入您要转码的字母:"<<endl;
	cin.get(input, 99);
	for (int i = 0; i < strlen(input); i++)
	{
		input[i] = letter_position(input[i]);
	}
	cout << input<<endl;
	return 0;
}
char letter_position(char a)
{
	if (a>=65 && a<=90)	//upper
		return changed[a - 65];
	if (a >= 97 && a <= 122)
		return changed[a - 97+26];
	else
		return a;
}