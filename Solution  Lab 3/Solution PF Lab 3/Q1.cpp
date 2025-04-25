#include<iostream>
using namespace std;
int main()
{
	int counter = 0;
	char arr[] = "Faisal is a good boy";
	char keyword;
	cout << "Enter a key word(You want to find): ";
	cin >> keyword;
	int i = 0;
	while (arr[i] != '\0')
	{
		if (keyword == arr[i])
		{
			cout << "Entered keyword is at index " << i << ": "<<arr[i] << endl;
			counter++;
		}i++;
	}cout << "Keyword is found " << counter << " times" << endl;
	return 0;
}