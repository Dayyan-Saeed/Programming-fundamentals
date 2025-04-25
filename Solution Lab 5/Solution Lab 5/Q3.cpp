#include <iostream>
#include <math.h>
using namespace std;

string caseCheck(int input)
{
    if (input < (int)'0') {
        return "Input is a special character";
    }
    else if (input <= (int)'9')
    {
        return "Input is a number";
    }
    else if (input < (int)'A')
    {
        return "Input is special character";
    }
    else if (input <= (int)'Z')
    {
        return "Input is Uppercase Alphabet";
    }
    else if (input < (int)'a')
    {
        return "Input is special character";
    }
    else if (input <= (int)'z')
    {
        return "Input is lowercase alphabet";
    }
}

int main()
{
    char input = {};
    cout << "Enter the character: ";
    cin >> input;
    cout << caseCheck(input);
}
