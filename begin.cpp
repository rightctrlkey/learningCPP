#include <iostream>
#include <cmath>
using namespace std;


int main() {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    name.clear();

    cout << "Hello " << name;
    return 0;
}
