#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int roll_no;
	float marks;

	ifstream fin("input Q 1.txt");

	float max1 = INT_MIN;
	float max2 = INT_MIN;
	float max3 = INT_MIN;

	while (!fin.eof())
	{
		fin >> roll_no >> marks;
		if (marks > max1)
		{
			max3 = max2;
			max2 = max1;
			max1 = marks;
		}
		if ((max1 > marks) && (max2 < marks))
		{
			max3 = max2;
			max2 = marks;
		}
		if ((max3 < marks) && (max2 > marks) && (max1 > marks))
		{
			max3 = marks;
		}
	}

	fin.close();

	cout << endl;
	cout << "1st position got student having " << max1 << " marks." << endl;
	cout << "2nd position got student having " << max2 << " marks." << endl;
	cout << "3rd position got student having " << max3 << " marks." << endl;
	
	cout << "\nData is saved in file \"Positions.txt\"." << endl;

	ofstream fout;
	fout.open("output Q 1.txt", ios::out);
	fout << "\t\tPositions\n";
	fout << "1st position got student having " << max1 << " marks." << endl;
	fout << "2nd position got student having " << max2 << " marks." << endl;
	fout << "3rd position got student having " << max3 << " marks." << endl;
	fout.close();

	return 0;
}