#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[10], i = 0;

	cout << "Enter marks of students: ";
	for (int j = 0; j < 10; j++)
		cin >> arr[j];

	ofstream fout;
	fout.open("Marks.txt", ios::out);

	for (int j = 0; j < 10; j++)
		fout << arr[j] << endl;

	fout.close();
	
	ifstream fin;
	fin.open("Marks.txt",ios::in);
	if (!fin){
		cout << "File not found ";
	}
	else{

		while (!fin.eof()){
			fin >> arr[i];
			cout << arr[i] << " ";
			
		}
	}
	fin.close();


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
	cout << "1st position student  " << max1 << " marks." << endl;
	cout << "2nd position student  " << max2 << " marks." << endl;
	cout << "3rd position student  " << max3 << " marks." << endl;


	fout.open("Positions.txt", ios::out);
	fout << "\t\tPositions\n";
	fout << "1st position student  " << max1 << " marks." << endl;
	fout << "2nd position student  " << max2 << " marks." << endl;
	fout << "3rd position student  " << max3 << " marks." << endl;
	fout.close();

	return 0;
}