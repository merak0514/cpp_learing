#include <iostream>
using namespace std;
int myfind(char *p, char *s);
int length(char *x);
bool check(char *p, char *s); //�ӿ�ʼ���ж��Ƿ���ͬ,����ͬ����ִ��ɾ������  
int main()
{
	char p1[100];
	char s1[100];
	cout << "����p��";
	cin >> p1;
	cout << "����s1:";
	cin >> s1;
	int count = myfind(p1, s1);
	cout << "�ҵ��ˣ�" << count << "��" << endl;
}
int myfind(char *p, char *s)
{
	int count = 0;
	if (length(p) == 0 || length(s) == 0 || length(p) < length(s))   //�������  
		return 0;
	for (p; *p != 0; p++)
		if (*p == *s)
			if (check(p, s))
				count++;
	return count;
}
int length(char *x)
{
	int count = 0;
	while (*x++ != 0)
		count++;
	return count;
}
bool check(char *p, char *s)
{
	for (s; *s != 0; s++, p++)
		if (*s != *p)
			return 0;
	return 1;
}
