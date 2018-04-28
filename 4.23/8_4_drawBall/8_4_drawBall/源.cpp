#include <iostream>
using namespace std;
enum Color
{
	RED,
	YELLOW,
	BLUE,
	WHITE,
	BLACK
};
void output(int x)
{
	switch (x)
	{
	case 0:
		cout << "ºì";
		break;
	case 1:
		cout << "»Æ";
		break;
	case 2:
		cout << "À¶";
		break;
	case 3:
		cout << "ºÚ";
		break;
	case 4:
		cout << "°×";
		break;
	}
}
int main()
{
	//int ball1, ball2, ball3;
	struct Method
	{
		int ball1;
		int ball2;
		int ball3;
	};
	Method method[100];
	int No = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			for (int k = j+1; k < 5; k++)
			{
				if (i != j && i != k && j != k)
				{
					method[No].ball1 = i;
					method[No].ball2 = j;
					method[No].ball3 = k;
					No++;
				}
			}
		}
	}
	cout << "×éºÏÓÐ£º\n";
	for (int i = 0; i < No; i++)
	{
		output(method[i].ball1);
		output(method[i].ball2);
		output(method[i].ball3);
		cout << endl;
	}
	return 0;
}
