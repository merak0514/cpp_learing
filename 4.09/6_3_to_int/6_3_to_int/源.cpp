#include<iostream>
using namespace std;
int atoi(char *string);
int main()
{
	cout << "ÊäÈëÄãµÄ×Ö·û´®Êý×Ö£º" << endl;
	char input[100];
	cin >> input;
	cout << atoi(input) << endl;
	return 0;
}
int atoi(char *string)
{
	int sum = 0;
	int sign = (*string == '+') ? 1 : -1;	//Ëã×Ó
	string++;
	while (*string != '\0') {
		(sum *= 10) += (*string - 48);
		string++;
	}
	sum *= sign;
	return sum;
}
