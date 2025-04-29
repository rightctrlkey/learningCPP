#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;



void HappyBirthday(string name){
    cout << "Enter your name: ";
    cin >> name;
    cout << "HAPPY BIRTHDAY TO " << name;
}

int main() {

    string name = "aman";
    HappyBirthday(name);
    
    return 0;
}
