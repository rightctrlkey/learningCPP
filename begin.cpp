#include <iostream>
#include <cmath>
using namespace std;


int main() {

    char op;
    double a;
    double b;
    double result;

    cout << "*************CALCULATOR*************\n";


    cout << "Enter either (+ - * /)";
    cin >> op;
    cout << "Enter A value: ";
    cin >> a;
    cout << "Enter B value: ";
    cin >> b;

    if(op == '+') {
        result = a + b;
        cout << a << op << b << "=" << result << endl;
    } else if(op == '-') {
        result = a-b;
        cout << a << op << b << "=" << result << endl;
    } else if(op == '*') {
        result = a * b;
        cout << a << op << b << "=" << result << endl;
    } else if(op == '/') {
        result = a / b;
        cout << a << op << b << "=" << result << endl;
    } else {
        cout << "That wasn't a valid response.";
    }
    
    
    cout << "************************************";
}
