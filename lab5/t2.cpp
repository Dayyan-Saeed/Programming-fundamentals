#include<iostream>
using namespace std;

int SquareRoot(int x)
{
	if (x == 0 || x == 1)
		return x;

	int i = 1, result = 1;
	while (result <= x)
	{
		i++;
		result = i * i;
	}
	return i - 1;
}

int power(int a, int b)
{
	if (b == 0)
		return 1;
	else if (b % 2 == 0)
		return power(a, b / 2) * power(a, b / 2);
	else
		return a * power(a, b / 2) * power(a, b / 2);
}


int main()
{
	int x;
	cout << "Enter value to find Square Root: ";
	cin >> x;

	cout << "Square Root: " << SquareRoot(x) << endl << endl;

	int a;
	int b;
	 
	cout << " \n Power calculation \n";
	cout << "Enter number: ";
	cin >> x;
	cout << "Enter power: ";
	cin >> b;

	cout << "Value: " << power(x, b);

	return 0;
}


