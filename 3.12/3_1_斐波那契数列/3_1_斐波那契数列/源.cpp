#include<iostream>
#include<cmath>
using namespace std;
/*
�ó���ʹ������Ч������
*/
int  main()
{
	unsigned int fodd = 0, feven=1,sum = 0,n,selected;	//���ʼfodd=1,feven=1

	cout << "����n:\n";
	cin >> n;
	if (n >=3)
	{
		for (unsigned int i = 0; i < n - 3; i = i + 2)	//�˴�ʹ��i<n-3�����Ժ���n<3ʱ��Ҫ���⴦��
		{
			sum = sum + fodd + feven;	//�ܺ������������ż����
			fodd = fodd + feven;	//�µ�����
			feven = fodd + feven;	//�µ�ż��
		}
		sum = sum + fodd + feven;	//�����һ��
		selected = feven;
	}
	/*
	���⴦��
	*/
	if (n == 1) selected = 0;
	if (n == 2)
	{
		selected = 1;
		sum = 1;
	}
	/*
	�������һ��
	*/
	if (n % 2 == 1 && n!=1 && n!=2)
	{
		fodd = feven + fodd;
		sum = sum + fodd;
		selected = fodd;
	}
	cout << "��ѡ�����: " << selected << "\n����õ����ܺ���: " << sum << endl;
	return 0;
}