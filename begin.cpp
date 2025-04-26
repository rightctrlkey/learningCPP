#include <iostream>
#include <cmath>
using namespace std;


int main() {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    if (name.length() > 12) {
        cout << "Your name cant be more than 12 characters!";
    } else {
        cout << "Welcome!!!";
    }

    return 0;
}
