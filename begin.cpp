#include <iostream>
#include <cmath>
using namespace std;


int main() {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    if (name.empty()) {
        cout << "You didnt enter your name.";
    } else {
        cout << "Hello " << name;
    }

    return 0;
}
