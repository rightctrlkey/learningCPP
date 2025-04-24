#include <iostream>
using namespace std;

int main() {
    int num1 = 0;
    int num2 = 1;
    int n;
    cin >> n;
    cout << num1;
    cout << num2;
    int num3;
    for (int i = 0; i < n-2; i++) {
        num3 = num1 + num2;
        cout << num3;
        num1 = num2;
        num2 = num3;
    }
}
