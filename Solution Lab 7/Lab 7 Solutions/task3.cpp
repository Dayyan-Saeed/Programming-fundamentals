#include <iostream>
#include <fstream>

using namespace std;

void copy_file(char copyfile[], char pastefile[])
{
    ifstream fin(copyfile);
    ofstream fout(pastefile);
    char temp[100] = {};

    while (true)
    {
        fin.getline(temp, 100);
        if (fin.eof())
        {
            break;
        }
            fout << temp << endl;
    }

    fin.close();
    fout.close();
}

void place_at_pos(char source[], int position, char value[])
{
    char tempfile[] = "task3_temp.txt";
    ifstream fin(source);
    ofstream fout(tempfile);
    char temp[100] = {};

    for (int i = 1; ; i++)
    {

        if (i == position)
            fout << value << endl;
        else
        {
            fin.getline(temp, 100);
            if (fin.eof())
                break;
            fout << temp << endl;
        }
    }
    fin.close();
    fout.close();

    copy_file(tempfile, source);
    remove(tempfile);
}


void sort_data(char file_a[], char file_s[])
{
    char temp_a[100] = {}, temp_b[100] = {};

    ifstream fin(file_a);
    ofstream fout(file_s);

    fin.getline(temp_a, 100);
    fout << temp_a << endl;
    fout.close();

    while (!fin.eof())
    {
        fin.getline(temp_a, 100);

        int position = 1;
        ifstream fina(file_s);
        while (true)
        {
            fina.getline(temp_b, 100);
            if (fina.eof())
                break;
            if (temp_b[0] <= temp_a[0])
            {
                position++;
            }
            else
            {
                break;
            }
        }

        fina.close();
        place_at_pos(file_s, position, temp_a);
    }
    fin.close();
}

int main() {
    char file_a[] = "task3.txt";
    char file_s[] = "task3_sorted.txt";
    char tempfile[] = "task3_temp.txt";
    // sort_data(file_a, file_s);

    // copy_file(file_a, file_s);
    // place_at_pos(file_s, 3, tempfile);
    sort_data(file_a, file_s);
}
