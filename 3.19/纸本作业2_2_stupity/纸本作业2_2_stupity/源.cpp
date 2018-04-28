#include <iostream>
using namespace std;
int main()
{
	int sum=0,count=1;
	for (int i = 0; i < 10; i++)
	{
		count *= (i + 1);
		sum = sum + count;
	}
	cout << sum << endl;
}