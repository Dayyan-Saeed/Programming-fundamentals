#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	char filename[] = "input Q 3.txt";
	ifstream fin(filename);
	int dislikes = 0, likes = 0, min_dislikes = {}, likes_and_dislikes = INT_MIN, video_sr = {};

	if (fin.is_open())
	{
		for (int i = 0; !fin.eof(); i++)
		{
			fin >> likes;
			fin >> dislikes;
			if (likes_and_dislikes < likes - dislikes)
			{
				likes_and_dislikes = likes - dislikes;
				min_dislikes = dislikes;
				video_sr = i;
			}
		}
	}
	fin.close();

	cout << "Video No. " << video_sr << " has most likes of " << likes_and_dislikes + min_dislikes << " and least dislikes of " << min_dislikes << "\n";
	cout << "\nData is saved in file named \"output Q 3\"\n";

	ofstream fout("output Q 3.txt");
	fout << "Video No. " << video_sr << " has most likes of " << likes_and_dislikes + min_dislikes << " and least dislikes of " << min_dislikes << "\n";
	fout.close();
}