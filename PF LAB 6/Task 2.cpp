#include <iostream>
#include <fstream>
using namespace std;

void caesarCipherEncryption(int shift, char text[])
{
	for (int i = 0; text[i] != '\0'; i++)
	{
		cout << (char)((int)text[i] + shift);
	}
}

void vigenereCipherEncryption(char phrase[], char key[])
{
	for (int i = 0; phrase[i] != '\0'; i++)
	{
		cout << char((key[i] - 'A') + (phrase[i] - 'A'));
	}
}

int size_of_char_arr(char arr[])
{
	int count = 0;
	while (arr[count] != '\0')
	{
		count++;
	}
	return count;
}



int main()
{
	const int size = 28;
	char phrase[size] = {'\0'};
	cout << "Enter a passphrase: ";
	cin.getline(phrase, size);

	cout << "Caesar Cipher encryption key is: ";
	caesarCipherEncryption(1 , phrase);
	cout << endl;

	char key[size] = {'\0'};
	cout << "Enter a key having same characters as passphrase: ";
	cin.getline(key, size);

	while (size_of_char_arr(phrase) != size_of_char_arr(key))
	{
		cout << "Length of arrays do not match.\n Enter exactly " << size_of_char_arr(phrase) << "values: ";
		cin.getline(key, size);
	}

	cout << "Vigenere cipher encryption key is: ";
	vigenereCipherEncryption(phrase, key);
	cout << endl;
}