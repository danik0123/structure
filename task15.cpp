#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name1, name2, name3;
    double price1, price2, price3;
    
    cout << "Product 1 - name: "; cin >> name1;
    cout << "Product 1 - price: "; cin >> price1;
    cout << "Product 2 - name: "; cin >> name2;
    cout << "Product 2 - price: "; cin >> price2;
    cout << "Product 3 - name: "; cin >> name3;
    cout << "Product 3 - price: "; cin >> price3;
    
    string cheapest = name1;
    double minPrice = price1;
    
    if (price2 < minPrice) { 
        minPrice = price2; 
        cheapest = name2; 
    }
    if (price3 < minPrice) { 
        minPrice = price3; 
        cheapest = name3; 
    }
    
    cout << fixed << setprecision(2);
    cout << "Cheapest: " << cheapest << " (" << minPrice << " UAH)" << endl;
    return 0;
}

