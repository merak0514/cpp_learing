#include<Windows.h>
#include<iostream>
using namespace std;
int main() {
	cout << "O-O";
	Sleep(1000);
	for (int i = 0; i < 10; i++) 
	{
		cout << "\b\b\b   ";
		cout << "\n" << "O-O";
		Sleep(100);
	}
	cout << endl;
	return 0;
}