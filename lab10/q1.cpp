#include <iostream>
using namespace std;

void input_array(int *arr, int size, int x)
{
	cout << "Enter the elements of dynamic array: " << endl;

	for (int i = 0; i<size; i++)
	{
		cin >> x;
		arr[i] = x;
	}
}

void display(int *arr, int size)
{
	cout << "Your dynamic array is: " << endl;
	for (int i = 0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void shift_left_index(int *arr, int size, int index)
{
	for (int i = index; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}

	for (int e = 0; e < size; e++)
	{
		cout << arr[e] << " ";
	}
}


int main()
{
	int *myarray;
	int size;
	int start_index;
	int x=0;

	cout << "Enter the size of the dynamic array: " << endl;
	cin >> size;
	
	myarray = new int[size];
	input_array(myarray, size, x);
	display(myarray, size);


	cout << "Enter your starting index: " << endl;
	cin >> start_index;

	cout << "Resultant Array after shifting is: " << endl;
	shift_left_index(myarray, size, start_index);


	return 0;
}