#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char line[50], input[50];
    int vowels=0, consonants=0;
    int a=0, e=0, vi=0, o=0, u=0;

    cout << "Enter a line ";
    cin.getline(line, 50);

    ofstream fout;
    fout.open("input.txt", ios::out);

        fout << line;
        fout.close();

        ifstream fin;
        fin.open("input.txt ", ios::in);

        fin.getline(input, 150);
        fin.close();

    for (int i = 0; input[i] != '\0'; ++i)
    {
        if (line[i] == 'a' || line[i] == 'A' )
        {
            a++;
            ++vowels;
        }
        else if (input[i] == 'e' || input[i] == 'E') {
            e++;
            vowels++;
        }

        else if (input[i] == 'i' || input[i] == 'I') {
            vi++;
            vowels++;
        }
        else if (input[i] == 'o' || input[i] == 'O') {
            o++;
            vowels++;
        }
        else if (input[i] == 'u' || input[i] == 'U') {
            u++;
            vowels++;
        }
      

        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            ++consonants;
        }
      
    }

    fout.open("Output.txt", ios::out);

    fout << "Total Vowels: " << vowels << endl;
    fout << "Total Consonants: " << consonants << endl;
    fout << "Total a : " << a << endl;
    fout << "Total e : " << e << endl;
    fout << "Total i : " << vi << endl;
    fout << "Total o : " << o << endl;
    fout << "Total u : " << u << endl;

    fout.close();

    return 0;
}