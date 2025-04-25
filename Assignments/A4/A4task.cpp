#include <iostream>
#include <fstream>

using namespace std;

void read_firstname(char** a, int rows, int cols)
{
    ifstream fin;
    fin.open("first name.txt");
    while (!fin.eof())
    {
        fin >> rows;

        for (int row = 0; row < rows; row++)
        {
            for (int col = 0; col < 6; col++)
            {
                fin >> a[row][col];
            }
        }
        fin.close();
    }
}

void read_lastname(char** a, int rows, int cols)
{
    ifstream fin;
    fin.open("last name.txt");
    while (!fin.eof())
    {
        fin >> rows;

        for (int row = 0; row < rows; row++)
        {
            for (int col = 0; col < 6; col++)
            {
                fin >> a[row][col];
            }
        }
        fin.close();
    }
}

void merge(char** A, char** B, char** C)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < 1)
            {
                C[i][j] = B[i][j];
            }
            else
            {
                C[i][j] = A[i - 1][j];
            }
        }
    }
    cout << "\n\n\C: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j];
        }
    }
}

void write(char** C,int rows,int cols)
{
    ofstream fout;
    fout.open("Full name.txt");

    fout << rows;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            fout << C[row][col];
        }
       
    }
    fout.close();

    cout << "Output on the text file 'full name.txt' " << endl;

}

void memory_free(char** a, char** b, char** c,int rows,int cols) {


    for (int i = 0; i < rows; ++i) {
        delete[] a[i];
    }
    delete[] a;


    for (int i = 0; i < rows; ++i) {
        delete[] b[i];
    }
    delete[] b;


    for (int i = 0; i < rows; ++i) {
        delete[] c[i];
    }
    delete[] c;

}


int main()
{
    int rows = 5;
    int cols = 6;

  
    char** a = new char* [rows];
    for (int i = 0; i < rows; ++i) {
        a[i] = new char[cols];
    }

    char** b = new char* [rows];
    for (int i = 0; i < rows; ++i) {
        b[i] = new char[cols];
    }

    char** c = new char* [rows];
    for (int i = 0; i < rows; ++i) {
        c[i] = new char[(cols+cols)];
    }

    read_firstname(a,rows,cols);
    read_lastname(b, rows, cols);
    merge(a,b,c);
    write(c, rows, cols);
    memory_free(a, b, c, rows, cols);


    





    return 0;
}