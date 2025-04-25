#include <iostream>
#include <cmath>
using namespace std;


int main() {

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 100) {
        cout << "You are too old to vote!";
    }
    else if (age >= 18) {
        cout << "You can vote!";
    } 
    else if(age < 0) {
        cout << "You aren't born yet!";
    }
    
    else {
        cout << "You cannot vote!";
    }

    return 0;
}
