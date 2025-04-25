#include <iostream>
using namespace std;

void remove_value_at_index(int * arr, int size, int index){	if (index<0 || index >= size)  
	{
		cout << "Invalid\n";
	}
	else
	{
		for (int i = index; i <= size - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = {};
	}

	cout << "Array is:\n";  
	for (int i = 0; i<5; i++)
	{
		if (arr[i] != '\0')
			cout << arr[i] << " ";
	}}void input_array(int *arr, int size, int x)
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
	display(myarray, size);

	int index;
	cout << "Enter the index to remove value: ";
	cin >> index;

	remove_value_at_index(myarray, size, index);


}