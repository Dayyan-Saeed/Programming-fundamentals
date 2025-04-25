#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int like[5], dis[5], lt = 0, dt = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter " << i + 1 << " youtube video likes and dislikes:" << endl;
		cout << "Likes: ";
		cin >> like[i];
		cout << "Dislikes: ";
		cin >> dis[i];

		
		lt = lt + like[i];
		dt = dt + dis[i];
	}
	cout << "Your Data is stored in File(Video Rating.txt)." << endl;

	ofstream fout;
	fout.open("Video Rating.txt",ios::out);

	fout << "Total likes of first youtube video  " << like[1] << endl;
	fout << "Total dislikes of first youtube video  " << dis[1] << endl;

	fout << "Total likes of second youtube video  " << like[2] << endl;
	fout << "Total dislikes of second youtube video  " << dis[2] << endl;

	fout << "Total likes of third youtube video  " << like[3] << endl;
	fout << "Total dislikes of third youtube video  " << dis[3] << endl;

	fout << "Total likes of fourth youtube video  " << like[4] << endl;
	fout << "Total dislikes of fourth youtube video  " << dis[4] << endl;

	fout << "Total likes of fifth youtube video  " << like[5] << endl;
	fout << "Total dislikes of fifth youtube video  " << dis[5] << endl;


	fout.close();

	int maxl = 0, maxds = 0l;

	for (int j = 0; j < 5; j++){

		if (like[j]>like[j]){
			like[j] = maxl;
		}
		if (dis[j]>dis[j]){
			dis[j] = maxds;
		}
	}

	cout << maxl;
	cout << maxds;


	fout.open("Max min rating.txt", ios::out);
	fout << "Max likes: ";
	fout << "Min dis";


	return 0;
}