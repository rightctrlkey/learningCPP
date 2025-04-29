#include <iostream>
using namespace std;

double square(double length);
double cube(double length);

int main() {

    double length = 3.0;
    double area = square(length);
    double volume = cube(length);

    cout << "The area is: " << area << "cm^2\n";
    cout << "The volume is: " << volume << "cm^3\n";

    return 0;
}

double square(double length){

    return length * length;
}
double cube(double length){

    return length * length * length;
}