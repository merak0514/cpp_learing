#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;
int main()
{
	unsigned num1, num2;
	//srand(time(NULL));
	num1 = rand() % 100;
	cout << "�������������֣�" << endl;
	cin >> num2;
	if (num1 == num2)
	{
		cout << "�¶���\n";
	}
	else
	{
		if (num1>num2)
		{
			cout << "С��\n";
		}
		else
		{
			cout << "����\n";
		}
	}
	return 0;
}