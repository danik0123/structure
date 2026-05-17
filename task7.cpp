#include <iostream>

using namespace std;

struct Time {
    int h, m, s;
};

int main() {
    Time t1, t2;

    cout << "Time 1 - hours: ";
    cin >> t1.h;

    cout << "Time 1 - minutes: ";
    cin >> t1.m;

    cout << "Time 1 - seconds: ";
    cin >> t1.s;

    cout << "Time 2 - hours: ";
    cin >> t2.h;

    cout << "Time 2 - minutes: ";
    cin >> t2.m;

    cout << "Time 2 - seconds: ";
    cin >> t2.s;

    int sec1 = t1.h * 3600 + t1.m * 60 + t1.s;
    int sec2 = t2.h * 3600 + t2.m * 60 + t2.s;

    cout << "Difference: " << sec2 - sec1 << " seconds";

    return 0;
}
