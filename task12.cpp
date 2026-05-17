#include <iostream>
#include <string>
using namespace std;

int main() {
    string name1, name2, name3;
    int grade1, grade2, grade3;
    
    cout << "Student 1 - name: ";
    cin >> name1;
    cout << "Student 1 - grade: ";
    cin >> grade1;
    
    cout << "Student 2 - name: ";
    cin >> name2;
    cout << "Student 2 - grade: ";
    cin >> grade2;
    
    cout << "Student 3 - name: ";
    cin >> name3;
    cout << "Student 3 - grade: ";
    cin >> grade3;
    
    string best = name1;
    int maxGrade = grade1;
    
    if (grade2 > maxGrade) { 
        maxGrade = grade2; 
        best = name2; 
    }
    if (grade3 > maxGrade) { 
        maxGrade = grade3; 
        best = name3; 
    }
    
    cout << "Best student: " << best << " (" << maxGrade << ")" << endl;
    return 0;
}

