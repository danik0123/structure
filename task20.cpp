#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Date {
    int day, month, year;
};

struct Time {
    int hours, minutes;
};

struct Event {
    string name;
    Date date;
    Time time;
};

int main() {
    Event event;
    
    cout << "Event name: ";
    cin.ignore();
    getline(cin, event.name);
    cout << "Date - day: "; cin >> event.date.day;
    cout << "Date - month: "; cin >> event.date.month;
    cout << "Date - year: "; cin >> event.date.year;
    cout << "Time - hours: "; cin >> event.time.hours;
    cout << "Time - minutes: "; cin >> event.time.minutes;
    
    cout << "Event: " << event.name << endl;
    cout << "When: " 
         << setfill('0') << setw(2) << event.date.day << "."
         << setfill('0') << setw(2) << event.date.month << "."
         << event.date.year << " at "
         << setfill('0') << setw(2) << event.time.hours << ":"
         << setfill('0') << setw(2) << event.time.minutes << endl;
    return 0;
}

