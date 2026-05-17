#include <iostream>
#include <iomanip>
using namespace std;

struct Point {
    double x, y;
};

struct Rectangle {
    Point bottomLeft;
    Point topRight;
};

int main() {
    Rectangle rectangle;
    
    cout << "Bottom-left - x: "; cin >> rectangle.bottomLeft.x;
    cout << "Bottom-left - y: "; cin >> rectangle.bottomLeft.y;
    cout << "Top-right - x: "; cin >> rectangle.topRight.x;
    cout << "Top-right - y: "; cin >> rectangle.topRight.y;
    
    double width = rectangle.topRight.x - rectangle.bottomLeft.x;
    double height = rectangle.topRight.y - rectangle.bottomLeft.y;
    double area = width * height;
    
    cout << fixed << setprecision(2);
    cout << "Area: " << area << endl;
    return 0;
}

