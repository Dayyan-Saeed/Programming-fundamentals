#include <iostream>
#include <fstream>
using namespace std;

int word_count(char text[])
{
	int words = 1;
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == ' ')
		{
			words++;
		}
	}
	return words;
}

int sentence_count(char text[])
{
	int sentence = 1;
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == '.')
		{
			sentence++;
		}
	}
	return sentence;
}

int paragraph_count(char text[])
{
	int paragraph = 1;
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == '\n')
		{
			paragraph++;
		}
	}
	return paragraph;
}

int main()
{
	char text[5000] = {'\0'};
	
	ifstream fin("Task 1.txt");
	if (fin.is_open())
	{
		int count = 0;
		while (!fin.eof())
		{
			fin.get(text[count++]);
		}
	}
	fin.close();

	cout << "Number of words: " << word_count(text) << endl;
	cout << "Number of Sentences: " << sentence_count(text) << endl;
	cout << "Number of Paragraphs: " << paragraph_count(text) << endl;
}