#include <iostream>
using namespace std;

float fahrenheit_to_celsius(float temperature_in_fehrenheit) {
    float temperature_in_celsius = (temperature_in_fehrenheit - 32) / 1.8;
    return temperature_in_celsius;
}

float celsius_to_fehrenheit(float temperature_in_celsius) {
    float temperature_in_fehrenheit = (temperature_in_celsius * 1.8) + 32;
    return temperature_in_fehrenheit;
}

int main()
{
    char option = {};
    while (true) {
        cout << "Select option:"
            << "\nEnter F to convert temperature from Fehrenheit to Celsius"
            << "\nEnter C to convert temperature from Celsius to Fehrenheit"
            << "\nEnter E to exit\n";
        cin >> option;

        if (option >= (int)'a') {
            option -= (int)'a' - (int)'A';
        }
        float temperature;
        if (option == 'E')
            break;
        else if (option == 'F')
        {
            cout << "Enter temperature in Fehrenheit: ";
            cin >> temperature;
            cout << "Temperature in Celsius: " << fahrenheit_to_celsius(temperature) << endl;
        }
        else if (option == 'C') 
        {
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            cout << "Temperature in Fehrenheit: " << celsius_to_fehrenheit(temperature) << endl;
        }
    }
}
