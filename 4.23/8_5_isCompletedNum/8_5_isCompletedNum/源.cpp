#include <iostream>
#include <cmath>
using namespace std;
bool isCompletedNum(int x);
int sumOfFactor(int x);
int main()
{
	
	for (int i = 2; i <= 100000; i++)
	{
		if (isCompletedNum(i))
		{
			cout << i << " = 1";
			for (int j = 1; j<i; j++)
				if (i % j == 0)
					cout << " + " << j;	
			cout << endl;
		}		
	}
	return 0;
}
bool isCompletedNum(int x)
{
	if(sumOfFactor(x)==x)
		return true;
	return false;
}
int sumOfFactor(int x)
{
	int sum = 0;
	for (int i=1; i <= sqrt(x); i++)
	{		
		if (x % i == 0)
		{
			sum += i;
			sum += x / i;
		}
	}
	return((int)sqrt(x) == sqrt(x)) ? sum - x - sqrt(x) : sum - x;
}
