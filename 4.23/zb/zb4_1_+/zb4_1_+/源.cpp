#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	cout << "输入你要计算的东西" << endl;
	char input[50];
	cin >> input;
	char num1[25], num2[25];
	char sign;
	int i;
	for (i = 0; input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/' && input[i] != '%'; i++)
	{
		num1[i] = input[i];
	}
	sign = input[i];
	i++;
	int position = i;
	for (; input[i] != '\0'; i++)
	{
		num2[i - position] = input[i];
	}
	int number1 = atoi(num1);
	int number2 = atoi(num2);
	int result;
	switch (sign)
	{
	case '+':
		result = number1 + number2;
		break;
	case '-':
		result = number1 - number2;
		break;
	case '*':
		result = number1 * number2;
		break;
	case '/':
		result = number1 / number2;
		break;
	case '%':
		result = number1 % number2;
		break;
	default:
		cout << "Wrong!" << endl;
		return -1;
		break;
	}
	cout << input << '=' << result << endl;
	return 0;
}