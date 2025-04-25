#include <iostream>
#include <fstream>
using namespace std;

 int main() {
	char name[50];
	int salary;
	int employeeCode;
	char dept[8];

		cout << "Enter name of employee : ";
		cin.getline(name, 50);
		cout << "Enter department : ";
		cin.getline(dept, 5);
		cout << "Enter salary of employee : ";
		cin >> salary;
		cout << "Enter employee code : ";
		cin >> employeeCode;
	

	cout << "\n*** Employee Details ***" << endl;
	cout << "Name : " << name << endl << "Salary : " << salary << endl;
	cout << "Employee Code : " << employeeCode << endl << "Department : " << dept;

	ofstream fout;
	fout.open("Employee details.txt");

		fout << "\n*** Employee Details ***" << endl;
		fout << "Name : " << name << endl << "Salary : " << salary << endl;
		fout << "Employee Code : " << employeeCode << endl << "Department : " << dept;
	

	fout.close();


	return 0;
}