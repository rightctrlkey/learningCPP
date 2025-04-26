#include <iostream>
#include <cmath>
using namespace std;


int main() {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);


    name.erase(0, 1);

    cout << name;
    
    return 0;
}
