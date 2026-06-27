#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name, rollNo;
    string subjects[] = {"Math", "Physics", "Chemistry", "English", "Computer"};
    int marks[5];

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    getline(cin, rollNo);

    int total = 0;
    for (int i = 0; i < 5; ++i) {
        cout << "Enter marks for " << subjects[i] << " (out of 100): ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Marks must be between 0 and 100. Please try again.\n";
            --i;
        } else {
            total += marks[i];
        }
    }

    double average = total / 5.0;
    char grade;

    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "\n========== MARKSHEET ==========" << endl;
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;

    for (int i = 0; i < 5; ++i) {
        cout << subjects[i] << " : " << marks[i] << "/100" << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Total Marks  : " << total << "/500" << endl;
    cout << "Average      : " << average << "%" << endl;
    cout << "Grade        : " << grade << endl;
    cout << "==============================" << endl;

    return 0;
}

