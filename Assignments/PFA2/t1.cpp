#include <iostream>
#include <fstream>
using namespace std;

double park_charges(double a) {

	double charges=0, b=0;

	if (a <= 3) {
		charges = 2.00;
	}

	if (a > 3) {
		b = a - 3;
		charges = 2.00 + (b * 0.50);
	}

	if (a >= 24) {
		charges = 10.00;
	}

	if (charges > 10.00) {
		charges = 10.00;
	}

	

	return charges;
}

double sum(double a, double b, double c) {

	double sum=0;

	sum = a + b + c;

	return sum;
}
int main() {

	double hr1, hr2, hr3;
	double charge1, charge2, charge3;

	cout << "Enter hours for car 1: ";
	cin >> hr1;
	cout << "Enter hours for car 2: ";
	cin >> hr2;
	cout << "Enter hours for car 3: ";
	cin >> hr3;

	charge1 = (park_charges(hr1));
	charge2 = (park_charges(hr2));
	charge3 = (park_charges(hr3));

	cout << "Car       Hours"      << "     Charge " << endl;
	cout << 1 <<"         " << hr1 << "          " << charge1 << endl;
	cout << 2 <<"         " << hr2 << "          " << charge2 << endl;
	cout << 3 <<"         " << hr3 << "          " << charge3 << endl;

	cout << "Total     " << sum(hr1, hr2, hr3) << "        " << sum(charge1, charge2, charge3) << endl;

	ofstream fout;
	fout.open("Charges.txt");

	fout << "Car       Hours"       << "     Charge " << endl;
	fout << 1 << "         " << hr1 << "         " << charge1 << endl;
	fout << 2 << "         " << hr2 << "         " << charge2 << endl;
	fout << 3 << "         " << hr3 << "         " << charge3 << endl;

	fout << "Total    " << sum(hr1, hr2, hr3) << "        " << sum(charge1, charge2, charge3) << endl;


	fout.close();

}

