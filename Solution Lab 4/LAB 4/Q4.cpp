#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int index = {}, grade_count[5] = {};
	char grade = {}, grade_order[] = { 'A', 'B', 'C', 'D', 'F' };

	ifstream fin;
	fin.open("input Q 4.txt");

	srand(time(0));
	
	while (!fin.eof())
	{
		fin >> index >> grade;

		if (grade == 'A')
		{
			grade_count[0]++;
		}
		else if (grade == 'B')
		{
			grade_count[1]++;
		}
		else if (grade == 'C')
		{
			grade_count[2]++;
		}
		else if (grade == 'D')
		{
			grade_count[3]++;
		}
		else if (grade == 'F')
		{
			grade_count[4]++;
		}
	}
	fin.close();

	for (int i = 0; i < 5; i++)
	{
		int max = i;
		for (int j = i; j < 5; j++)
		{
			if (grade_count[j] > grade_count[max])
			{
				max = j;
			}
		}
		int temp = grade_count[max];
		grade_count[max] = grade_count[i];
		grade_count[i] = temp;

		temp = grade_order[max];
		grade_order[max] = grade_order[i];
		grade_order[i] = temp;
	}


	ofstream fout("output Q 4.txt");

	cout << "Grade with maximum occurance is " << grade_order[0] << " with count " << grade_count[0] << endl;
	cout << "Grade with minimum occurance is " << grade_order[4] << " with count " << grade_count[4] << endl;
	cout << "Grade with average occurance is " << grade_order[2] << " with count " << grade_count[2] << endl;
	cout << "\nData is stored in \"output Q 4.txt\" file";

	fout << "Grade with maximum occurance is " << grade_order[0] << " with count " << grade_count[0] << endl;
	fout << "Grade with minimum occurance is " << grade_order[4] << " with count " << grade_count[4] << endl;
	fout << "Grade with average occurance is " << grade_order[2] << " with count " << grade_count[2] << endl;

	fout.close();

	return 0;

}