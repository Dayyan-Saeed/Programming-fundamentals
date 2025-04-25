#include <iostream>
using namespace std;

int main() {
    
    char ch;

    cout << "Enter any character : ";
    cin >> ch;


    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        cout << endl << ch << " is ALPHABET.";

    }
    else if (ch >= '0' && ch <= '9') {

        cout << endl << ch << " is DIGIT.";

    }
    else {

        cout << endl << ch << " is SPECIAL CHARACTER.";

    }

    return 0;
}