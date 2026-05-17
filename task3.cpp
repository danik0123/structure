#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
    double x, y;
};

int main() {
    Point p;

    cout << "Enter x: ";
    cin >> p.x;

    cout << "Enter y: ";
    cin >> p.y;

    double d = sqrt(p.x * p.x + p.y * p.y);

    cout << fixed << setprecision(2);
    cout << "Distance from origin: " << d;

    return 0;
}
