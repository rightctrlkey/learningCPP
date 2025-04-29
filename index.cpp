#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


int main() {

    int num;
    int guess;
    int tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    
    while(guess != num){
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess > num) {
            cout << "LOWER!\n";
            tries++;
        }
        else if (guess < num) {
            cout << "HIGHER! \n";
            tries++;
        }
        else {
            cout << "GOOD GUESS!! You guessed the number " << num << " in " << tries + 1 << " tries";
        }
    }

    return 0;
}
