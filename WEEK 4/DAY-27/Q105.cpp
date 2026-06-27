// Student record management system 

#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

void q105() {
    cout << "=== Student Record Management ===" << endl;
    int n;
    cout << "Enter number of students: "; cin >> n;
    Student students(n);
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        cout << "Roll No: "; cin >> students[i].rollNo;
        cout << "Name: ";    cin >> students[i].name;
        cout << "Marks: ";   cin >> students[i].marks;
    }
    int choice;
    do {
        cout << "\n1. Display All\n2. Search by Roll No\n3. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "\nRoll\tName\t\tMarks" << endl;
            for (int i = 0; i < n; i++)
                cout << students[i].rollNo << "\t" << students[i].name << "\t\t" << students[i].marks << endl;
        } else if (choice == 2) {
            int roll; cout << "Enter Roll No: "; cin >> roll;
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (students[i].rollNo == roll) {
                    cout << "Roll: " << students[i].rollNo << ", Name: " << students[i].name << ", Marks: " << students[i].marks << endl;
                    found = true; break;
                }
            }
            if (!found) cout << "Student not found." << endl;
        }
    } while (choice != 3);
}
