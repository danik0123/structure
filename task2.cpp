
#include <iostream>
#include <iomanip>

using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

int main() {
    Product p;

    cout << "Enter name: ";
    cin >> p.name;

    cout << "Enter price: ";
    cin >> p.price;

    cout << "Enter quantity: ";
    cin >> p.quantity;

    double total = p.price * p.quantity;

    cout << fixed << setprecision(2);
    cout << "Total: " << total << " UAH";

    return 0;
}
