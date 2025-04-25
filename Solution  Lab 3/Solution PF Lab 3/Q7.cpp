#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int age;
	char gender;
	char name[100];
	char deg[100];
	char fn[100];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter name of " << i + 1 << " student :";
		cin >> name;
		cout << "Enter age of " << i + 1 << " student :";
		cin >> age;
		cout << "Enter Fathers name of " << i + 1 << " student :";
		cin >> fn;
		cout << "Enter degree of " << i + 1 << " student :";
		cin >> deg;
		cout << "Enter gender of " << i + 1 << " student :";
		cin >> gender;


		ofstream fout;
		fout.open("task7.txt");
		fout << "Name " << name << ",";
		fout << "age " << age << ",";
		fout << "fathers name" << fn << ",";
		fout << "degree " << deg << ",";
		fout << "gender" << gender << ",";
		fout << endl;
		fout.close();
	}

}