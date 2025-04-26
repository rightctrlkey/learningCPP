#include <iostream>
#include <cmath>
using namespace std;


int main() {

    int temp;

    cout << "Enter the temperature: ";
    cin >> temp;

    if(temp > 0 && temp < 30) {
        cout << "The temperature is good.";
    }
    else {
        cout << "The temperature is bad.";
    }
    return 0;
}
