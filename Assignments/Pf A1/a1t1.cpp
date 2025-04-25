#include <iostream>
using namespace std;
int main() {
	char arr[50];
	int temp, l;
	
	cout << "Enter the size of array: ";
	cin >> l;

	cout << "Enter Character Array: ";
	for (int i = 0; i < l; i++) {
		cin >> arr[i];
		
	}

	cout << "Length is : " << l << endl;

	if (l % 2 == 0) {
		cout << "     Array is Even " << endl;
		cout << " Reverse Array:   " << endl;

		for (int i = (l - 1); i >= 0; i--) {
			cout << arr[i];
		}
		cout << endl;
	}
	else {
		cout << "    Array is odd " << endl;
		cout << "Alphabetical Array: ";
	
		for (int i = 0; i < l; i++)
		{
			for (int j = 1; j < l - i; j++)
			{
				if (arr[j - 1] > arr[j])
				{
					temp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for (int i = 0; i < l; i++)
			cout << arr[i];
	}
	


	return 0;
}