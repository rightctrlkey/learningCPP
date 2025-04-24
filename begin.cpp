#include <iostream>

namespace first{
    int x = 5;
}

namespace second{
    int x = 10;
}

int main() {

    int x = 15;
    std::cout << x << "\n";
    std::cout << first::x << "\n";
    std::cout << second::x << "\n";


    return 0;
}
