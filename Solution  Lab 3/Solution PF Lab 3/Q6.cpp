#include<iostream>
#include<fstream>
using namespace std;
int main()
{

	int a = 0, b = 0, c = 0, d = 0, f = 0;
	char arr[1000];
	int num;
	cout << "Enter the number of students: ";
	cin >> num;
	cout << "Enter Grades of Students: ";
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];

		if ((arr[i] == 'A') || (arr[i] == 'a'))
		{
			a++;
		}
		if ((arr[i] == 'B') || (arr[i] == 'b'))
		{
			b++;
		}
		if ((arr[i] == 'C') || (arr[i] == 'c'))
		{
			c++;
		}
		if ((arr[i] == 'D') || (arr[i] == 'd'))
		{
			d++;
		}
		if ((arr[i] == 'F') || (arr[i] == 'e'))
		{
			f++;
		}

		ofstream fout;
		fout.open("Grades.txt", ios::out);
		fout << "Total As are: " << a << endl;
		fout << "Total Bs are: " << b << endl;
		fout << "Total Cs are: " << c << endl;
		fout << "Total Ds are: " << d << endl;
		fout << "Total Fs are: " << f << endl;
		fout.close();
	}
	return 0;
}