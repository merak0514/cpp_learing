#include <iostream>
using namespace std;
char *f(char *p, char *s);
int length(char *x);
void deleteB(char *p, char *s);	//从开始处判断是否相同,若相同，则执行删除操作
int main()
{
	char p1[100];
	char s1[100];
	cout << "输入p：";
	cin >> p1;
	cout << "输入s1:";
	cin >> s1;
	char *s = s1;
	char *p = p1;
	f(p, s);
	cout << "删除后为：" << p << endl;
}
char *f(char *p, char *s)
{
	if (length(p) == 0 || length(s) == 0 || length(p) < length(s))	//特殊情况
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
	char *INPUT = p;	//记录第一个相同时p的指针
	char *temp = p;	//操作中使用
	for (s; *s != 0; s++, p++)
	{
		if (*s != *p)
		{
			flag = -1;	//标识出现不相同项
			break;
		}
	}
	if (flag != -1) {
		int to_end = length(p);	//从此处到最后还有几位
		for (int i = 0; i < to_end + 1; i++, temp++, p++)	//删除操作
			*temp = *p;
		p = INPUT;	//回拨指针
	}
}
