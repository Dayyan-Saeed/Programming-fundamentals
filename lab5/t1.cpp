#include <iostream>
using namespace std;

double fahrenheitToCelsius(double fahrenheit)
{
    double celsius;

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    return celsius;
}

double celsiustofahrenheit(double celsius)
{
    double fahrenheit;

    fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}

int main()
{
    double fahrenheit;
    double celsius;

    cout << "Enter temperature in fahrenheit (in degrees) ";
    cin >> fahrenheit;
    cout << "Temperature in Celsius (in degrees) = "
        << fahrenheitToCelsius(fahrenheit) << endl << endl;

    cout << "Enter temperature in celsius (in degrees) ";
    cin >> celsius;
    cout << "Temperature in fahrenheit (in degrees) = "
        << celsiustofahrenheit(celsius) << endl;



    return 0;
}


