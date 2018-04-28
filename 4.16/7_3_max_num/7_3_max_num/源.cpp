#include <iostream>
using namespace std;
int maxnum(int array[], int begin, int end);
char maxnum(char array[], int begin, int end);
double maxnum(double array[], int begin, int end);
int main()
{
	
	int input1[4] = { 2,0,3 };
	double input2[] = { 2.0,3.5,7.922 };
	char input3[] = { '3','5','0' };
	cout <<"int:"<< maxnum(input1, 0, 2)<<endl;
	cout << "double:" << maxnum(input2, 0, 2) << endl;
	cout << "char:" << maxnum(input3, 0, 2) << endl;
	return 0;
}
int maxnum(int array[], int begin, int end)
{
	if (begin == end)
		return array[begin];
	else
		return array[begin] > maxnum(array, begin + 1, end) ? array[begin] : maxnum(array, begin + 1, end);
}
char maxnum(char array[], int begin, int end)
{
	if (begin == end)
		return array[begin];
	else
		return array[begin] > maxnum(array, begin + 1, end) ? array[begin] : maxnum(array, begin + 1, end);
}
double maxnum(double array[], int begin, int end)
{
	if (begin == end)
		return array[begin];
	else
		return array[begin] > maxnum(array, begin + 1, end) ? array[begin] : maxnum(array, begin + 1, end);
}