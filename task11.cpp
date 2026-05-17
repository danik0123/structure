#include <iostream>

using namespace std;

struct Student {
    string name;
    int grade;
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << " - name: ";
        cin >> s[i].name;

        cout << "Student " << i + 1 << " - grade: ";
        cin >> s[i].grade;
    }

    cout << "\nResults:\n";

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". "
             << s[i].name << " - "
             << s[i].grade << endl;
    }

    return 0;
}
