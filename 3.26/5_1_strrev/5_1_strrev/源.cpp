#include<iostream>
#include<cstring>
using namespace std;
void mystrrev(char string[]);
int main()
{
	char string[100];
	cout << "�������ַ�����\n";
	cin.get(string, 99);
	mystrrev(string);
	cout << string << endl;
	return 0;
}
void mystrrev(char string[])
{
	char temp;
	int length = (strlen(string) - 1) / 2;
	for (int i = 0; i < length; i++)
	{
		temp = string[i];
		string[i] = string[strlen(string) - i - 1];
		string[strlen(string) - i - 1] = temp;
	}
}