#include <iostream>
#include <fstream>
using namespace std;

int length_of_file(char text[])
{
    int i = 0;
    while (text[i] != '\0')
    {
        i++;
    }
    return i;
}

int get_current_line_length(char text[], int offset)
{
    int i = 0;
    while (text[offset + i] != '\n' && text[offset + i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char text[1000] = {'\0'};
    
    int size_of_file = 0;
    ifstream fin("Task 3.txt");
    while (!fin.eof())
    {
        fin.get(text[size_of_file++]);
    }
    fin.close();
    size_of_file--;
    int i = 0, n;
    while (true)
    {
        char current_letter = text[i];
        int current_sentence_length = get_current_line_length(text, i);
        n = i + current_sentence_length + 1;
        char next_letter = text[n];

        // cout << "current_letter: " << current_letter << " next_letter: " << next_letter << endl;

        if (next_letter == '\0')
            break;
        int next_sentence_length = get_current_line_length(text, n);
        
        if (current_letter > next_letter)
        {
            char temp[100] = {'\0'};
            for (int j = 0; j < next_sentence_length; j++)
            {
                temp[j] = text[n + j]; 
            }
            // cout << "Extracted: " << temp << endl;
            for (int j = n; j < size_of_file; j++)
            {
                text[j] = text[j + next_sentence_length + 1];
            }
            for (int j = size_of_file; j >= i; j--)
            {
                text[j + next_sentence_length + 1] = text[j];
            }
            for (int j = 0; j < next_sentence_length; j++)
            {
                text[i+j] = temp[j];
            }
        }
        i = n;
    }
    ofstream fout("Task 3 Output.txt");
    fout << text;
    fout.close();    
}