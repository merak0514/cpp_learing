#include <iostream>
using namespace std;
int  statistic(char *string);
int main()
{
	char input[100];
	cin.get(input, 99);
	cout << statistic(input);
	return 0;
}
int  statistic(char *string)
{
	int count = 1;
	while (*string++ != 0)
	{
		if (*string == ' ' || *string == ',' || *string == '.')
			for (string, count++; *string == ' ' || *string == ',' || *string == '.'; string++);
	}
	if (--*string == ' ' | ',' | '.')	//±êµã·ûºÅ½áÎ²-1
		count--;
	return count;
}