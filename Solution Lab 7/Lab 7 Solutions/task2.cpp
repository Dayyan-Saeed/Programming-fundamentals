#include <iostream>
#include <fstream>
using namespace std;

int arr_len(char arr[])
{
	int i = 0;
	while (arr[i] != 0)
	{
		i++;
	}
	return i;
}

bool are_arr_equal(char arr_a[], char arr_b[])
{
	for (int i = 0; arr_a[i] != '\0'; i++)
	{
		if (arr_a[i] != arr_b[i])
		{
			return false;
		}
	}
	return true;
}

void copy_files(char copy_file[], char pase_file[])
{
	ifstream fin(copy_file);
	ofstream fout(pase_file);

	char temp[50] = {};

	while (true)
	{
		fin.getline(temp, 50);
		if (fin.eof())
			break;

		fout << temp << endl;
	}
	fin.close();
	fout.close();
}

void remove_duplicate(char file_a[], char file_b[])
{
	char temp_file[] = "task2_remove_duplicate.txt";
	ifstream fin_a(file_a);
	ofstream fout(temp_file);

	char temp_a[50] = {};
	char temp_b[50] = {};


	while (!fin_a.eof())
	{
		fin_a.getline(temp_a, 50);
		bool line_equal = false;

		ifstream fin_b(file_b);
		while (!fin_b.eof())
		{
			fin_b.getline(temp_b, 50);
			if (arr_len(temp_a) == arr_len(temp_b))
			{
				if (are_arr_equal(temp_a, temp_b))
				{
					line_equal = true;
				}
			}
		}
		if (!line_equal)
			fout << temp_a << endl;
		fin_b.close();
	}
	fin_a.close();
	fout.close();

	copy_files(temp_file, file_a);

	remove(temp_file);
}

int main()
{
	char file_a[] = "task2_file_1.txt";
	char file_b[] = "task2_file_2.txt";
	
	remove_duplicate(file_a, file_b);
	
	return 0;
}