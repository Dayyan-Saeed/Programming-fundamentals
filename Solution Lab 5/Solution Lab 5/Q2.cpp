#include <iostream>
using namespace std;

float squareRoot(int number) 
{
    float result = 1;
    while (result * result < number)
    {
        result += 0.1;
    }
    return result;
}
int power(int base, int power) 
{
    int result = base;
    for (int i = 1; i < power; i++)
    {
        result *= base;
    }
    return result;
}
int floorx(float number) 
{
    return number;
}
int ceilx(float number) 
{
    return ++number;
}
int permutations (int n, int r) 
{
    int n_factorials = 1;
    int n_minus_r_factorials = 1;
    for (int i = 1; i <= n; i++)
        n_factorials *= i;
    for (int i = 1; i <= n-r; i++)
        n_minus_r_factorials *= i;
    
    return n_factorials / n_minus_r_factorials;
}
int combinations (int n, int r) 
{
    int n_factorials = 1;
    int r_factorials = 1;
    int n_minus_r_factorials = 1;
    for (int i = 1; i <= n; i++)
        n_factorials *= i;
    for (int i = 1; i <= r; i++)
        r_factorials *= i;
    for (int i = 1; i <= n-r; i++)
        n_minus_r_factorials *= i;
    
    return n_factorials / (n_minus_r_factorials * r_factorials);
}

int main()
{
    char option = {};
    while (true)
    {
        cout << "Select option:"
            << "\nEnter S for Square Root"
            << "\nEnter P for Power"
            << "\nEnter F for Floor"
            << "\nEnter C for Ceil"
            << "\nEnter R for Permutation"
            << "\nEnter X for Combination"
            << "\nEnter E for exit" << endl;
        cin >> option;
        // Check to convert lower case Character to upper case character
        if (option >= 'a')
            option -= 'a' - 'A';
        // Operations
        if (option == 'E')
            break;
        else if (option == 'S')
        {
            int number = {};
            cout << "Enter a number to check square root: ";
            cin >> number;
            
            cout << squareRoot(number);
        }
        else if (option == 'P')
        {
            int base = {}, exponent = {};
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter power: ";
            cin >> exponent;
            
            cout << power(base, exponent);
        }
        else if (option == 'F')
        {
            float number = {};
            cout << "Enter number in floating point notaion: ";
            cin >> number;
            
            cout << floorx(number);
        }
        else if (option == 'C')
        {
            float number = {};
            cout << "Enter number in floating point notaion: ";
            cin >> number;
            
            cout << ceilx(number);
        }
        else if (option == 'R')
        {
            int n = {}, r = {};
            cout << "Enter n: ";
            cin >> n;
            cout << "Enter r: ";
            cin >> r;

            cout << permutations(n, r);   
        }
        else if (option == 'X')
        {
         
            int n = {}, r = {};
            cout << "Enter n: ";
            cin >> n;
            cout << "Enter r: ";
            cin >> r;

            cout << combinations(n, r);   
        }
        cout << endl << endl;
    }
    return 0;
}