#include <iostream>
using namespace std;
int myfind(char *p, char *s);
int length(char *x);
bool check(char *p, char *s); //从开始处判断是否相同,若相同，则执行删除操作  
int main()
{
	char p1[100];
	char s1[100];
	cout << "输入p：";
	cin >> p1;
	cout << "输入s1:";
	cin >> s1;
	int count = myfind(p1, s1);
	cout << "找到了：" << count << "个" << endl;
}
int myfind(char *p, char *s)
{
	int count = 0;
	if (length(p) == 0 || length(s) == 0 || length(p) < length(s))   //特殊情况  
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
