#include <iostream>
using namespace std;
int type(char a);
void my_static(char * str, int *count, int *upper, int *lower, int *digit, int *other);
int main()
{
	char input[100];
	cout << "�������ַ�����С��99λ��:" << endl;
	cin.get(input, 99);
	char *ptr = input;
	int count = 0, digit = 0, lower = 0, upper = 0, other = 0;
	int *pcount = &count, *pdigit = &digit, *plower = &lower, *pupper = &upper, *pother = &other;
	my_static(ptr, pcount, pupper, plower, pdigit, pother);
	cout << "��������ַ����й���" << *pcount << "���ַ���" << *pdigit << "������, " << *pupper << "����д��ĸ, " << *plower << "��Сд��ĸ," << *pother << "�������ַ�" << endl;
	return 0;
}
int type(char a)
{
	if (a >= 48 && a <= 57)
		return 1;
	if (a >= 65 && a <= 90)
		return 2;
	if (a >= 97 && a <= 122)
		return 3;
	return 4;
}
void my_static(char * str, int *count, int *upper, int *lower, int *digit, int *other)
{
	while (*str != '\0')
	{
		*count += 1;
		switch (type(*str))
		{
		case 1:
			*digit += 1;
			break;
		case 2:
			*upper += 1;
			break;
		case 3:
			*lower += 1;
			break;
		case 4:
			*other += 1;
			break;
		}
		str++;
	}
}