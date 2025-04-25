#include <iostream>
using namespace std;

void separate(int* arr, int* one_digit, int* two_digit, int size, int x, int& a, int& b)
{
	cout << "Input array: " << endl;

	for (int i = 0; i < size; i++)
	{  
		cin >> x;
		if (x != 0) {
			arr[i] = x;

			if (x <= 9) {
				one_digit[a] = x;
				a++;
			}
			else {
				two_digit[b] = x;
				b++;
			}
		}
		else {
			size = 0;
		}
	}
}

int main()
{
	int* input;
	int size = 0;
	int x = 0;

	cout << "Enter the size of the dynamic array: ";
	cin >> size;

	input = new int[size];

	int* one_digit;
	int* two_digit;
	one_digit = new int[size];
	two_digit = new int[size];

	int a = 0, b = 0;

	separate(input, one_digit, two_digit, size, x, a, b);

	cout << "one digit: ";
	for (int i = 0; i < a; i++)
	{
		cout << one_digit[i] << " ";
	}
	cout << endl;

	cout << "Two digit: ";
	for (int i = 0; i < b; i++)
	{
		cout << two_digit[i] << " ";
	}

	delete[]one_digit;
	delete[]two_digit;

	return 0;
}