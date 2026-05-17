#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name1, name2, name3;
    int grade1, grade2, grade3;
    
    cout << "Student 1 - name: "; cin >> name1;
    cout << "Student 1 - grade: "; cin >> grade1;
    cout << "Student 2 - name: "; cin >> name2;
    cout << "Student 2 - grade: "; cin >> grade2;
    cout << "Student 3 - name: "; cin >> name3;
    cout << "Student 3 - grade: "; cin >> grade3;
    
    double average = (grade1 + grade2 + grade3) / 3.0;
    cout << fixed << setprecision(2);
    cout << "Average grade: " << average << endl;
    return 0;
}

