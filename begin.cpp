#include <iostream>
#include <cmath>
using namespace std;


int main() {

    double temp;
    char unit;

    cout << "*******temperature conversion********\n";

    cout << "C = Celcius\n";
    cout << "F = Farenheit\n";
    cout << "Enter the unit you want the temperature converted to: ";
    cin >> unit;
    if (unit == 'C' || unit == 'c') {
        cout << "Enter the temp in Fahrenheit: ";
        cin >> temp;
        cout << (temp - 32) / 1.8 << "C"<< "\n";
    } else if (unit == 'F' || unit == 'f') {
        cout << "Enter the temp in Celcius: ";
        cin >> temp;
        cout << (1.8 * temp) + 32 << "F" << "\n";
    } else {
        cout << "Please enter in only C or F.";
    }

    cout << "*************************************";

    

    return 0;
}
