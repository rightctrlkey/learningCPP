#include <iostream>
#include <cmath>
using namespace std;


int main() {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);


    name.insert(0, "@");


    cout << name;
    return 0;
}
