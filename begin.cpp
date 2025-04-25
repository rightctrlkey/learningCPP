#include <iostream>
using namespace std;

namespace first{
    int x = 5;
}

namespace second{
    int x = 10;
}

int main() {

    string name;
    int age;
    cout << "Enter Your full name: ";
    getline(cin, name);
    cout << "Enter Your age: ";
    cin >> age;

    cout << "Hello " << name << '\n';
    cout << "You are " << age << " years old";



    return 0;
}
