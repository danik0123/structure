#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

int main() {
    Book b;

    cout << "Enter title: ";
    getline(cin, b.title);

    cout << "Enter author: ";
    getline(cin, b.author);

    cout << "Enter year: ";
    cin >> b.year;

    cout << "\"" << b.title << "\" by "
         << b.author << " (" << b.year << ")";

    return 0;
}
