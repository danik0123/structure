#include <iostream>

using namespace std;

struct Complex {
    int real;
    int imag;
};

int main() {
    Complex c1, c2;

    cout << "Complex 1 - real: ";
    cin >> c1.real;

    cout << "Complex 1 - imag: ";
    cin >> c1.imag;

    cout << "Complex 2 - real: ";
    cin >> c2.real;

    cout << "Complex 2 - imag: ";
    cin >> c2.imag;

    int realSum = c1.real + c2.real;
    int imagSum = c1.imag + c2.imag;

    cout << "Sum: " << realSum
         << " + " << imagSum << "i";

    return 0;
}
