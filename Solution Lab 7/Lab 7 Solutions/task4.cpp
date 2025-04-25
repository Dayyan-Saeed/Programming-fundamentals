#include<iostream>
using namespace std;
void input(char ch[])
{
	cout << "Topic of add:";
	cin.getline(ch, 1000);
}
void comment(char ch[])
{
	cout << "comment:";
	cin.getline(ch, 1000);
}
void display(char ch[],char ch1[])
{  
	int a = 0;
	int b = 0;
	int count = 0;
	//This loop identify total number of character
	for (int i = b; ch1[i] != '\0'; i++)
	{
		for (int j = 0; ch[j] != '\0'; j++)
		{
			if (ch1[a+i] == ch[j])
			{
				a++;
				count++;
				b++;
			}
			else if (ch1[a+i] == ' ')
			{
				a = 0;
				count = 0;
				b++;
				break;
			}
			else
			{
				a = 0;
				count = 0;
				b++;
			}
		}
		if (count != 0)
		{
			cout << "This comment is write on post:";
			break;
		}
		else
		{
			continue;
		}
	}
}
int main()
{
	char ch[1000];
	char ch1[10000];
	input(ch);
	comment(ch1);
	display(ch,ch1);
}