#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_STUDENTS = 100;
    string names[MAX_STUDENTS];
    int rollNumbers[MAX_STUDENTS];
    double grades[MAX_STUDENTS];
    int studentCount = 0;

    while (true) {
        cout << "Student Record System\n";
        cout << "1. Add student record\n";
        cout << "2. Display all records\n";
        cout << "3. Search by roll number\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";

        int choice;
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 1) {
            if (studentCount >= MAX_STUDENTS) {
                std::cout << "Cannot add more students. Maximum reached.\n\n";
                continue;
            }

            cout << "Enter student name: ";
            getline(cin, names[studentCount]);
            cout << "Enter roll number: ";
            cin >> rollNumbers[studentCount];
            cout << "Enter grade: ";
            cin >> grades[studentCount];
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            studentCount++;
            cout << "Record added successfully.\n\n";
        } else if (choice == 2) {
            if (studentCount == 0) {
                cout << "No records to display.\n\n";
                continue;
            }
            cout << "\nAll student records:\n";
            for (int i = 0; i < studentCount; ++i) {
                cout << "Student " << (i + 1) << ":\n";
                cout << "  Name: " << names[i] << "\n";
                cout << "  Roll Number: " << rollNumbers[i] << "\n";
                cout << "  Grade: " << grades[i] << "\n\n";
            }
        } else if (choice == 3) {
            if (studentCount == 0) {
                cout << "No records available to search.\n\n";
                continue;
            }

            cout << "Enter roll number to search: ";
            int searchRoll;
            cin >> searchRoll;
            bool found = false;
            for (int i = 0; i < studentCount; ++i) {
                if (rollNumbers[i] == searchRoll) {
                    cout << "Record found:\n";
                    cout << "  Name: " << names[i] << "\n";
                    cout << "  Roll Number: " << rollNumbers[i] << "\n";
                    cout << "  Grade: " << grades[i] << "\n\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "No student found with roll number " << searchRoll << ".\n\n";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (choice == 4) {
            cout << "Exiting student record system.\n";
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n\n";
        }
    }

    return 0;
}
