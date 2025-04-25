#include <iostream>
using namespace std;
int search(int * arr, int size, int value){	for (int i = 0; i < size - 1; i++){		if (arr[i]==value){			return i;		}	}	return -1;}void input_array(int *arr, int size, int x)
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

	int value;
	cout << "Enter the value you want to search in array: ";
	cin >> value;

	int index = search(myarray, size, value);

	cout << "Index of the value: " << index << endl;

	

}