#include <iostream>
using namespace std;

namespace first{
    int x = 5;
}

namespace second{
    int x = 10;
}

int main() {

    int x = 15;
    cout << x << "\n";
    cout << first::x << "\n";
    cout << second::x << "\n";


    return 0;
}
