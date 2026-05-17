#include <iostream>
#include <iomanip>

using namespace std;

struct Rectangle {
    double width;
    double height;
};

int main() {
    Rectangle r;

    cout << "Enter width: ";
    cin >> r.width;

    cout << "Enter height: ";
    cin >> r.height;

    double area = r.width * r.height;
    double perimeter = 2 * (r.width + r.height);

    cout << fixed << setprecision(2);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter;

    return 0;
}
