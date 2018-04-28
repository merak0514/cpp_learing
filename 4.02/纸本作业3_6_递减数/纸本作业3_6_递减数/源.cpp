#include <iostream>
using namespace std;
bool is_decrease(int num);
int main()
{
	int count = 0;
	int sum = 0;
	int i = 1;
	cout << '(';
	for (i; i < 9999; i++)	//9999前的数字
	{
		if (is_decrease(i))
		{
			cout << i << " + ";
			sum = sum + i;
			count += 1;
		}
	}
	if (is_decrease(i))
		cout << i << ")/4 = "<<(double)sum/count;

	return 0;
}
bool is_decrease(int num)
{


	unsigned last_num;
	unsigned second_last_num;
	while (num >= 10)
	{
		last_num = num % 10;  //获得最后一位  
		num = num / 10; //清除一位数字  
		second_last_num = num % 10;   //倒数第二位数字  
		if (last_num > second_last_num)
			return 0;
	}
	return 1;


}