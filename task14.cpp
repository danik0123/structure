#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name1, name2, name3;
    double price1, price2, price3;
    int quantity1, quantity2, quantity3;
    
    cout << "Product 1 - name: "; cin >> name1;
    cout << "Product 1 - price: "; cin >> price1;
    cout << "Product 1 - quantity: "; cin >> quantity1;
    
    cout << "Product 2 - name: "; cin >> name2;
    cout << "Product 2 - price: "; cin >> price2;
    cout << "Product 2 - quantity: "; cin >> quantity2;
    
    cout << "Product 3 - name: "; cin >> name3;
    cout << "Product 3 - price: "; cin >> price3;
    cout << "Product 3 - quantity: "; cin >> quantity3;
    
    double totalValue = price1 * quantity1 + price2 * quantity2 + price3 * quantity3;
    cout << fixed << setprecision(2);
    cout << "Total warehouse value: " << totalValue << " UAH" << endl;
    return 0;
}

