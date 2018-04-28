#include<iostream>
using namespace std;
int day_back(int peach_today);
int main() {
	int peach = 1;
	for (int i = 0; i < 10; i++)
	{
		peach = day_back(peach);
	}
	cout << peach << endl;
}
int day_back(int peach_today) {
	int peach_yesterday;
	peach_yesterday = (peach_today + 1) * 2;
	return peach_yesterday;
}