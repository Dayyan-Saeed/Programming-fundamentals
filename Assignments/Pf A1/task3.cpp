#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char input[50];
    int i;

    ofstream fout;
    fout.open("students.txt", ios::out);

    fout << "FA21-BCS-110" << endl;
    fout << "FA20-BCS-122" << endl;
    fout << "SP21-BSE-134" << endl;
    fout << "FA21-BCS-137" << endl;
    fout << "FA21-BSE-145" << endl;


    fout.close();

    ifstream fin;
    fin.open("students.txt ", ios::in);
    if (!fin.is_open())
    {
        cout << "file is not found ";
    }
    else
    {
        while (!fin.eof()) {
            {
                fin >> input[i];
            }
        }
    }
    
    fin.close();


  
    fout.open("records.txt", ios::out);

    fout << "Semester          Program         Roll No " << endl;
    fout << input[i];

    fout.close();


    cout << "Output on the file " << endl;

    return 0;
}