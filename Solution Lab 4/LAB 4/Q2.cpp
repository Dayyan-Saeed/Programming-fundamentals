#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char rating[6] = {'\0'};
	int total_stars = 0;
	float number_of_reviews = 0;

	ifstream fin("input Q 2.txt");
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			fin.getline(rating, 6, ',');
			cout << rating << ',';
			number_of_reviews++;
			for (int i = 0; i < 5 && rating[i] != '\0'; i++)
			{
				if (rating[i] == '*')
					total_stars++;
			}
		}
	}

	fin.close();

	cout << "\nNumber of reviews: " << number_of_reviews << endl;
	cout << "Average is " << total_stars / number_of_reviews << endl;
	
	cout << "\nData will be stored in file \"uber_rating_average.txt\" " << endl;

	ofstream fout("output Q 2.txt");
	fout << "Number of reviews: " << number_of_reviews << endl;
	fout << "Average rating is " << total_stars / number_of_reviews << endl;

	fout.close();
}