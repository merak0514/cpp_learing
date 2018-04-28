#include <iostream>
using namespace std;
char *mystrspc(char *string, int n);
int main()
{
	cout << "请输入你要生成的空格量(<100):";
	int n;
	cin >> n;
	char string[100];
	char *space;
	space = mystrspc(string, n);
	cout << "<<";
	for (int i = 0; i < n; i++, space++)
		cout << *space;
	cout << "<<" << endl;
	return 0;
}
char *mystrspc(char *string, int n)
{
	char *origin_string = string;
	for (int i = 0; i < n; i++, string++)
		*string = ' ';
	*string = '\0';
	return origin_string;
}
