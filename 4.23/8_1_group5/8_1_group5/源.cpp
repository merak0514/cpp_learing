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
	cout << "����ѧ��������Ϣ:" << endl;
	for (int i = 0; i < GROUP_NUM; i++)
	{
		cout << "�����" << i + 1 << "��ѧ������Ϣ" << endl;
		cin >> student[i].name >> student[i].gender>>student[i].birthday.year
			>> student[i].birthday.month>> student[i].birthday.day;
	}
	cout << "����	�Ա�	����" << endl;
	cout << "-------------------" << endl;
	int boy = 0, girl = 0, birth = 0;
	for (int i = 0; i < GROUP_NUM; i++)
	{
		if (strcmp(student[i].gender, "��")==0)
			boy++;
		else
			girl++;
		if (student[i].birthday.year >= 1988)
			birth++;
		cout << student[i].name <<'\t'<< student[i].gender << '\t' 
			<< student[i].birthday.year << '.' << student[i].birthday.month 
			<< '.' << student[i].birthday.day<<endl;
	}
	cout << "����" << boy << "�ˣ�Ů��" << girl << "�ˡ�1988���Ժ��������Ϊ" << birth << endl;
	return 0;
}