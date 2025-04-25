#include <iostream>
using namespace std;

void read(int *arr, int size)
{
	cout << "Your dynamic array after reading is: " << endl;
	for (int i = 0; i<size; i++)
	{
		cout << *(arr+i) << " ";
	}
	cout << endl;
}


void input_array(int *arr, int size, int x)
{
	cout << "Enter the elements of dynamic array: " << endl;

	for (int i = 0; i<size; i++)
	{
		cin >> x;
		arr[i] = x;
	}
}


int main()
{
	int *myarray;
	int size;
	int start_index;
	int x = 0;

	cout << "Enter the size of the dynamic array: " << endl;
	cin >> size;

	myarray = new int[size];
	input_array(myarray, size, x);
	read(myarray, size);


	return 0;
}