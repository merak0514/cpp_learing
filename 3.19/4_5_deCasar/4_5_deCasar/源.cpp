#include<iostream>  
using namespace std;
int type(char a);
int main()
{
	char input[20];
	int len;    //�ַ�������  
	cout << "��������Ҫ���ܵ���ĸ������ ��С��19������\n";
	cin.get(input, 20);
	len = strlen(input);
	for (int i = 0; i < len; i++)
	{
		switch (type(input[i]))
		{
		case 0:
			input[i] -= 3;
			if (input[i] < 48) input[i] += 10;
			break;
		case 1:
			input[i] -= 3;
			if (input[i] < 65) input[i] += 26;
			break;
		case 2:
			input[i] -= 3;
			if (input[i] < 97) input[i] += 26;
			break;
		default:
			cout << "�������󣡣���" << endl;
			return 0;
		}
		
	}
	cout << "ԭʼ�ַ����ǣ�\n";
	for (int i = 0; i < len; i++)
	{
		cout << input[i];
	}
	cout << endl;
	return 0;
}
int type(char a)    //���0��������������֣����1�����Ǵ�д��ĸ��2����Сд��ĸ�����������򷵻�-1.  
{
	if (a >= 48 && a <= 57) return 0;
	else {
		if (a >= 65 && a <= 90) return 1;
		else {
			if (a >= 97 && a <= 122) return 2;
			else return -1;
		}
	}
}