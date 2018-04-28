#include <iostream>
using namespace std;
#define GROUP_NUM  5
struct Date
{
	int year;
	int month;
	int day;
};
struct Group
{
	char name[20];
	char gender[1];
	Date birthday;
};
int main()
{
	Group student[GROUP_NUM];
	cout << "输入学生个人信息:" << endl;
	for (int i = 0; i < GROUP_NUM; i++)
	{
		cout << "输入第" << i + 1 << "个学生的信息" << endl;
		cin >> student[i].name >> student[i].gender>>student[i].birthday.year
			>> student[i].birthday.month>> student[i].birthday.day;
	}
	cout << "姓名	性别	生日" << endl;
	cout << "-------------------" << endl;
	int boy = 0, girl = 0, birth = 0;
	for (int i = 0; i < GROUP_NUM; i++)
	{
		if (strcmp(student[i].gender, "男")==0)
			boy++;
		else
			girl++;
		if (student[i].birthday.year >= 1988)
			birth++;
		cout << student[i].name <<'\t'<< student[i].gender << '\t' 
			<< student[i].birthday.year << '.' << student[i].birthday.month 
			<< '.' << student[i].birthday.day<<endl;
	}
	cout << "男生" << boy << "人，女生" << girl << "人。1988年以后出生人数为" << birth << endl;
	return 0;
}