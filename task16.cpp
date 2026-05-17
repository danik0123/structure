#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Date {
    int day, month, year;
};

struct Student {
    string name;
    Date birth;
};

int main() {
    Student student;
    
    cout << "Enter name: "; cin >> student.name;
    cout << "Enter day: "; cin >> student.birth.day;
    cout << "Enter month: "; cin >> student.birth.month;
    cout << "Enter year: "; cin >> student.birth.year;
    
    cout << student.name << " was born on " 
         << setfill('0') << setw(2) << student.birth.day << "."
         << setfill('0') << setw(2) << student.birth.month << "."
         << student.birth.year << endl;
    return 0;
}

