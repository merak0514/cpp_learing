#include <iostream>
#define NUM 5
using namespace std;
struct Song
{
	char name[15];
	char author[10];
	int freq;
};

void sort(Song song[]);
int main()
{
	Song song[NUM];
	cout << "���������Ϣ:\n";
	char song_info[50];
	for (int i = 0; i < NUM; i++)
	{
		cin >> song[i].name >> song[i].author >> song[i].freq;
	}
	sort(song);
	cout << "�����Ϊ��" << endl;
	cout << "------------------------" << endl;
	for (int i = 0; i < NUM; i++)
		cout << song[i].name << ' ' << song[i].author << ' ' << song[i].freq<<endl;
	return 0;
}
void sort(Song song[])
{
	for (int i = 0; i < NUM; i++)
	{
		for(int j=i+1;j<NUM;j++)
			if (song[j].freq > song[i].freq)
			{
				Song temp = song[i];
				song[i] = song[j];
				song[j] = temp;
			}
	}
}