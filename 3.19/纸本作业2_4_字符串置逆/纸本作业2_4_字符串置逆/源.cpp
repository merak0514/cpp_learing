#include <iostream>
using namespace std;
int main()
{
	char s[11],temp;
	cout << "������10���ַ�"<<endl;
	cin.get(s, 11);
	for (int i = 0; i < 5; i++)
	{
		temp = s[i];
		s[i] = s[9 - i];
		s[9 - i] = temp;
	}
	cout << "���ú�Ϊ��\n" << s << endl;
}