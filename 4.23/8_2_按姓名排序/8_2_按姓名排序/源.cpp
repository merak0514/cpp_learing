#include <iostream>
using namespace std;
#define USER_NUM 5
struct USER
{
	char name[15];
	char telephone[15];
}temp;
bool strCompare(char x[], char y[]);
int main()
{
	USER user[5];
	cout << "Input user info:\n";
	for(int i=0;i<USER_NUM;i++)
	{
		cout << "Input the user NO." << i+1 << ":\n";
		cin >> user[i].name >> user[i].telephone;
	}
	
	for (int i =0 ; i < USER_NUM; i++)
	{
		int flag = i;
		for (int j = i+1; j < USER_NUM; j++)
		{
			if (strCompare(user[j].name , user[i].name))
				flag = j;
		}
		temp = user[i];
		user[i] = user[flag];
		user[flag] = temp;
	}
	cout << "Userinfo:" << endl;
	cout << "User name	User telephone" << endl;
	for (int i = 0; i < USER_NUM; i++)
	{
		cout << user[i].name << '\t' << user[i].telephone << endl;
	}
	return 0;
}
bool strCompare(char x[], char y[])
{
	for (int i = 0;; i++)
	{
		if (x[i] < y[i])
			return 1;
		else if (x[i] > y[i])
			return 0;
		if (x[i] == y[i] == 0)
			return 0;
	}
}