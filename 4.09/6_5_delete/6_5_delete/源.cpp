#include <iostream>
using namespace std;
char *f(char *p, char *s);
int length(char *x);
void deleteB(char *p, char *s);	//�ӿ�ʼ���ж��Ƿ���ͬ,����ͬ����ִ��ɾ������
int main()
{
	char p1[100];
	char s1[100];
	cout << "����p��";
	cin >> p1;
	cout << "����s1:";
	cin >> s1;
	char *s = s1;
	char *p = p1;
	f(p, s);
	cout << "ɾ����Ϊ��" << p << endl;
}
char *f(char *p, char *s)
{
	if (length(p) == 0 || length(s) == 0 || length(p) < length(s))	//�������
		return p;
	char *INPUT = p;
	for (p; *p != 0; p++)
	{
		if (*p == *s)
		{
			deleteB(p, s);
		}
	}
	p = INPUT;
	return p;
}
int length(char *x)
{
	int count = 0;
	while (*x++ != 0)
		count++;
	return count;
}
void deleteB(char *p, char *s)
{
	int flag = 0;
	char *INPUT = p;	//��¼��һ����ͬʱp��ָ��
	char *temp = p;	//������ʹ��
	for (s; *s != 0; s++, p++)
	{
		if (*s != *p)
		{
			flag = -1;	//��ʶ���ֲ���ͬ��
			break;
		}
	}
	if (flag != -1) {
		int to_end = length(p);	//�Ӵ˴�������м�λ
		for (int i = 0; i < to_end + 1; i++, temp++, p++)	//ɾ������
			*temp = *p;
		p = INPUT;	//�ز�ָ��
	}
}
