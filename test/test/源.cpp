#include <iostream>
using namespace std;
int main()
{
	// �������ڼ�����
	enum Weekday_type
	{
		SUNDAY,     	// ������
		MONDAY,      	// ����һ
		TUESDAY,     	// ���ڶ�
		WEDNESDAY = 13,  	 // ������
		THURSDAY,    	// ������
		FRIDAY,      	// ������
		SATURDAY     	// ������
	};
	enum Weekday_type workday;
	workday = MONDAY;
	cout << workday << endl;
	workday = FRIDAY;
	cout << workday << endl;
	
	return 0;
}
