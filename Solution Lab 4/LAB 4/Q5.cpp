#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int bscs = 0, bssc = 0, bba = 0, pharm_d = 0, total_scholarships = 0, program = {};
	bool scholarship = {};

	ifstream fin;
	fin.open("input Q 5.txt");

	srand(time(0));

	while (!fin.eof())
	{
		fin >> program >> scholarship;
		
		// programs are stored in integers and are denoted by their respective numbers as given in the conditions below
		if (program == 1)
			bscs++;
		else if (program == 2)
			bssc++;
		else if (program == 3)
			bba++;
		else if (program == 4)
			pharm_d++;

		// Scholarships are boolean 0 1. 1 for yes, 0 for no
		if (scholarship == true)
			total_scholarships++;
	}
	fin.close();

	ofstream fout("output Q 5.txt");

	cout << "BSCS students are " << bscs << endl;
	cout << "BSSC students are " << bssc << endl;
	cout << "BBA students are " << bba << endl;
	cout << "Pharm.D students are " << pharm_d <<  endl;

	cout << "Scholarship students are " << total_scholarships << endl;

	fout << "BSCS students are " << bscs << endl;
	fout << "BSSC students are " << bssc << endl;
	fout << "BBA students are " << bba << endl;
	fout << "Pharm.D students are " << pharm_d << endl;

	fout << "Scholarship students are " << total_scholarships << endl;

	fout.close();

	return 0;

}