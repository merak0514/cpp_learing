#include <iostream>
using namespace std;
int type(char a);
void my_static(char * str, int *count, int *upper, int *lower, int *digit, int *other);
int main()
{
	char input[100];
	cout << "请输入字符串（小于99位）:" << endl;
	cin.get(input, 99);
	char *ptr = input;
	int count = 0, digit = 0, lower = 0, upper = 0, other = 0;
	int *pcount = &count, *pdigit = &digit, *plower = &lower, *pupper = &upper, *pother = &other;
	my_static(ptr, pcount, pupper, plower, pdigit, pother);
	cout << "你输入的字符串中共有" << *pcount << "个字符，" << *pdigit << "个数字, " << *pupper << "个大写字母, " << *plower << "个小写字母," << *pother << "个其他字符" << endl;
	return 0;
}
int type(char a)
{
	if (a >= 48 && a <= 57)
		return 1;
	if (a >= 65 && a <= 90)
		return 2;
	if (a >= 97 && a <= 122)
		return 3;
	return 4;
}
void my_static(char * str, int *count, int *upper, int *lower, int *digit, int *other)
{
	while (*str != '\0')
	{
		*count += 1;
		switch (type(*str))
		{
		case 1:
			*digit += 1;
			break;
		case 2:
			*upper += 1;
			break;
		case 3:
			*lower += 1;
			break;
		case 4:
			*other += 1;
			break;
		}
		str++;
	}
}