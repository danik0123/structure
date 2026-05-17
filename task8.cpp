#include <iostream>
#include <string>

using namespace std;

struct Product {
    string name;
    double price;
};

int main() {
    Product p1, p2;

    cout << "Product 1 - name: ";
    cin >> p1.name;

    cout << "Product 1 - price: ";
    cin >> p1.price;

    cout << "Product 2 - name: ";
    cin >> p2.name;

    cout << "Product 2 - price: ";
    cin >> p2.price;

    if (p1.price > p2.price)
        cout << p1.name << " is more expensive";
    else
        cout << p2.name << " is more expensive";

    return 0;
}
