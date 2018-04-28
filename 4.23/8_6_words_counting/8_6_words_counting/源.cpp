#include <iostream>
#include<string>
using namespace std;
struct Word
{
	char word[25];
	int freq;
};
void Sort(Word  list[], int count);
int whereExist(Word word[], char a[], int position);
int main()
{
	int i, num = 0;
	char passage[1000];
	cout << "输入文章：" << endl;
	cin.get(passage, 999);
	Word wordSet[100];
	char wordsSplit[100][25];
	int count = 0;
	char temp[50];
	int j;
	for (int i = 0; passage[i - 1] != '\0'; i += j + 1)
	{
		for (j = 0; passage[i + j] != ' '&& passage[i + j] != '\0'; j++)
		{
			temp[j] = passage[i + j];
		}
		temp[j] = '\0';
		if (whereExist(wordSet, temp, count) == -1)
		{
			strcpy_s(wordSet[count].word, temp);
			wordSet[count].freq = 1;
			count++;
		}
		else
			wordSet[whereExist(wordSet, temp, count)].freq++;
	}
	Sort(wordSet, count);
	cout << "词频统计结果如下：" << endl;
	for (i = 0; i < count; i++)  
		cout << wordSet[i].word << '\t' << wordSet[i].freq << endl;
	return 0;
}
int whereExist(Word word[], char a[], int position)
{
	for (int i = 0; i < position; i++)
	{
		if (strcmp(word[i].word, a) == 0)
			return i;
	}
	return -1;
}
void Sort(Word  list[], int count)
{
	for (int i = 0; i < count; i++)
		for (int j = count - 1; j > i; j--)
			if (strcmp(list[j - 1].word, list[j].word) > 0)
			{
				Word tmp;
				tmp = list[j - 1];
				list[j - 1] = list[j];
				list[j] = tmp;
			}
}