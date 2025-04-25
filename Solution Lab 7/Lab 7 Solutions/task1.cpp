#include <iostream>
#include <fstream>
using namespace std;

bool are_files_equal(char file_a[], char file_b[])
{
	ifstream fin_a(file_a);
	ifstream fin_b(file_b);

	char temp_a = {};
	char temp_b = {};

	while (!fin_a.eof())
	{
		fin_a >> temp_a;
		fin_b >> temp_b;

		if (!fin_a.eof() && fin_b.eof())
			return false;
		else if (temp_a != temp_b)
			return false;
	}
	return true;
}

int main()
{
	char file_a[] = "task1_file_1.txt";
	char file_b[] = "task1_file_2.txt";

	if (are_files_equal(file_a, file_b))
	{
		cout << "Files have same content\n";
	}
	else {
		cout << "Files have different content\n";
	}
	return 0;
}