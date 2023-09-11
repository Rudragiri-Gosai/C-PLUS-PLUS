#include <iostream>
using namespace std;

class TemperatureConverter
{
private:
    double celsius;

public:
    double convertion(float fahrenheit)
    {
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        return celsius;
    }
};

int main()
{
    double fahrenheitInput, tocelsius;
    cout << "This program will print fahrenheit into celsius." << endl;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheitInput;

    TemperatureConverter converter;
    tocelsius = converter.convertion(fahrenheitInput);

    cout << "Temperature in Celsius: " << tocelsius << " degrees Celsius" << endl;

    return 0;
}
