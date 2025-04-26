#include <iostream>
#include <cmath>
using namespace std;


int main() {

    int temp;
    bool sunny = true;

    cout << "Enter the temperature: ";
    cin >> temp;

    if(temp <=0 || temp >=30) {
        cout << "The temperature is bad.";
    }
    else {
        cout << "The temperature is good.";
    }

    if (!sunny) {
        cout << "It is sunny outside";
    } else {
        cout << "It is cloudy outside";
    }
    return 0;
}
