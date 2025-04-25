#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char p1[6], p2[6], p3[6], p4[6], p5[6];
	cout << "Enter your rating(Enter Stars Only,Maximum 5 Stars): ";
	cin >> p1;
	cout << "Enter your rating(Enter Stars Only,Maximum 5 Stars): ";
	cin >> p2;
	cout << "Enter your rating(Enter Stars Only,Maximum 5 Stars): ";
	cin >> p3;
	cout << "Enter your rating(Enter Stars Only,Maximum 5 Stars): ";
	cin >> p4;
	cout << "Enter your rating(Enter Stars Only,Maximum 5 Stars): ";
	cin >> p5;


	cout << "Rating is stored in file" << endl;
	cout << "To view Rating Open the file named as Ratings.txt" << endl;

	ofstream fout;
	fout.open("Ratings.txt", ios::out);
	fout << p1 << "," << p2 << "," << p3 << "," << p4 << "," << p5 << endl;
	fout.close();

	char arr[30];
	int i = 0, j = 0, avg;

	ifstream fin;
	fin.open("Ratings.txt", ios::in);
	if (!fin){
		cout << "File not found ";
	}
	else{

		while (!fin.eof()){
			fin >> arr[i];
			if (arr[i] == '*'){
				j++;
			}
		}
	}
		fin.close();

		avg = j / 5;

		fout.open("Average Rating.txt", ios::out);
		fout << "  Uber Ratings" << endl;
		fout << "Average stars: " << avg;
		cout << avg;


		fout.close();





		return 0;
	}