#include <iostream>
using namespace std;

string concatString(string string1, string string2);

int main() {


    string firstName = "Aman";
    string lastName = "Gupta";
    string fullname = concatString(firstName, lastName);
    cout << "Hello " << fullname;


    return 0;
}

string concatString(string string1, string string2) {
    return string1 + ' ' + string2;
}