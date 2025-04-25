#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int like[5], dis[5], lt = 0, dt = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter " << i + 1 << " youtube video likes and dislikes:" << endl;
		cout << "Likes: ";
		cin >> like[i];
		cout << "Dislikes: ";
		cin >> dis[i];

		lt = lt + like[i];
		dt = dt + dis[i];
	}cout << "Your Data is stored in File(Total_Likes&Dislikes.txt)." << endl;

	ofstream fout;
	fout.open("Total_Likes&Dislikes.txt");
	fout << "Total likes of 5 youtube videos are " << lt << endl;
	fout << "Total dislikes of 5 youtube videos are " << dt << endl;
	fout.close();
	return 0;
}