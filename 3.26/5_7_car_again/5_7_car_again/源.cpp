#include <iostream>
#include<windows.h>
using namespace std;
void walking(char car[], int n, int k, char direction)
{

	int i;
	char del_car[80];     //�������С�����ַ���
	for (i = 0; i < strlen(car); i++)
	{
		del_car[i] = '\b';	//�γ���С��ͬ�������ַ���
		del_car[i + strlen(car)] = ' ';	//���Ͽո���סС��
		del_car[i + 2 * strlen(car)] = '\b';	//�ƶ����
	}
	del_car[i + 2 * strlen(car)] = '\0';	//�ַ���β����ӽ�����
	if (direction == 'C')
	{
		for (int k = 0; k < n; k++)
			cout << ' ';
	}
	for (i = 0; i < n; i++) 	//ѭ������С����n��
	{
		switch (direction)
		{
		case 'A':
			cout << ' ' << car;
			break;
		case 'B':
			cout << '\n' << car;
			break;
		case 'C':
			cout << '\b' << car;
			break;
		case 'D':
			cout << endl;
			for (int j = 0; j < i; j++)
				cout << ' ';
			cout << car;
			break;
		default:
			cout << "�������";
			exit;
		}

		Sleep(1000 / k);		//������ͣ1/k��
		cout << del_car;		//������ʾ��С��
	}
}
int main()   // ���Ժ���walking() �õ�������
{
	cout << "������ĳ���";
	char car[91];
	cin.get(car, 90);
	cout << "���벽��: ";
	int step;
	cin >> step;
	cout << "�����ٶȣ�";
	int speed;
	cin >> speed;
	cout << "�������ͣ�";
	char type;
	cin >> type;
	walking(car, step, speed, type);
	return 0;
}
