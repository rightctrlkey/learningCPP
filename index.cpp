#include <iostream>
using namespace std;

void MyPizza();
void MyPizza(string topping1);
void MyPizza(string topping1, string topping2);

int main() {

    MyPizza();
    MyPizza("Mushroom");
    MyPizza("Mushroom", "cheese");
    return 0;
}

void MyPizza() {
    cout << "Here is your Pizza!\n";
}
void MyPizza(string topping1) {
    cout << "Here is your " << topping1 << " Pizza!\n";
}
void MyPizza(string topping1, string topping2) {
    cout << "Here is your " << topping1 << " and " << topping2 << " Pizza!\n";
}
