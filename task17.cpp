#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Point {
    double x, y;
};

struct Segment {
    Point start, end;
};

int main() {
    Segment segment;
    
    cout << "Start point - x: "; cin >> segment.start.x;
    cout << "Start point - y: "; cin >> segment.start.y;
    cout << "End point - x: "; cin >> segment.end.x;
    cout << "End point - y: "; cin >> segment.end.y;
    
    double dx = segment.end.x - segment.start.x;
    double dy = segment.end.y - segment.start.y;
    double length = sqrt(dx*dx + dy*dy);
    
    cout << fixed << setprecision(2);
    cout << "Segment length: " << length << endl;
    return 0;
}

