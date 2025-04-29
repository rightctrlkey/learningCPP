#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


int main() {

    srand(time(0));
    int randNum = (rand() % 5) + 1;

    switch(randNum) {
        case 1: 
            cout << "You got a 1!";
            break;
        case 2: 
            cout << "You got a 2!";
            break;
        case 3: 
            cout << "You got a 3!";
            break;
        case 4: 
            cout << "You got a 4!";
            break;
        case 5: 
            cout << "You got a 5!";
            break;
        default: 
            cout << "Please enter numbers between 1-5";
    }
    return 0;
}
