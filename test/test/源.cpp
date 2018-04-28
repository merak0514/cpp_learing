#include <iostream>
using namespace std;
int main()
{
	// 定义星期几类型
	enum Weekday_type
	{
		SUNDAY,     	// 星期日
		MONDAY,      	// 星期一
		TUESDAY,     	// 星期二
		WEDNESDAY = 13,  	 // 星期三
		THURSDAY,    	// 星期四
		FRIDAY,      	// 星期五
		SATURDAY     	// 星期六
	};
	enum Weekday_type workday;
	workday = MONDAY;
	cout << workday << endl;
	workday = FRIDAY;
	cout << workday << endl;
	
	return 0;
}
