#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[10];
	cout << "Enter marks of students: ";
	for (int j = 0; j < 10; j++)
		cin >> arr[j];

	int max1 = INT_MIN;
	int max2 = INT_MIN;
	int max3 = INT_MIN;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i]>max1)
		{
			max3 = max2;
			max2 = max1;
			max1 = arr[i];
		}
		if ((max1 > arr[i]) && (max2 < arr[i]))
		{
			max3 = max2;
			max2 = arr[i];
		}
		if ((max3<arr[i]) && (max2>arr[i]) && (max1>arr[i]))
		{
			max3 = arr[i];
		}
	}
	cout << endl;
	cout << "1st position got student having " << max1 << " marks." << endl;
	cout << "2nd position got student having " << max2 << " marks." << endl;
	cout << "3rd position got student having " << max3 << " marks." << endl;

	ofstream fout;
	fout.open("Positions.txt", ios::out);
	fout << "\t\tPositions\n";
	fout << "1st position got student having " << max1 << " marks." << endl;
	fout << "2nd position got student having " << max2 << " marks." << endl;
	fout << "3rd position got student having " << max3 << " marks." << endl;
	fout.close();

	return 0;
}