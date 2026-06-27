#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    double salary;
};

void displayEmployee(const Employee &emp) {
    cout << "ID: " << emp.id << "\n";
    cout << "Name: " << emp.name << "\n";
    cout << "Department: " << emp.department << "\n";
    cout << "Salary: $" << fixed << setprecision(2) << emp.salary << "\n";
}

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\nEmployee Management System\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Delete Employee by ID\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Employee emp;
            cout << "Enter ID: ";
            cin >> emp.id;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, emp.name);
            cout << "Enter Department: ";
            getline(cin, emp.department);
            cout << "Enter Salary: ";
            cin >> emp.salary;
            employees.push_back(emp);
            cout << "Employee added successfully.\n";
        } else if (choice == 2) {
            if (employees.empty()) {
                cout << "No employees found.\n";
            } else {
                for (const auto &emp : employees) {
                    displayEmployee(emp);
                    cout << "--------------------\n";
                }
            }
        } else if (choice == 3) {
            int id;
            cout << "Enter employee ID to search: ";
            cin >> id;
            bool found = false;
            for (const auto &emp : employees) {
                if (emp.id == id) {
                    displayEmployee(emp);
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Employee not found.\n";
            }
        } else if (choice == 4) {
            int id;
            cout << "Enter employee ID to delete: ";
            cin >> id;
            bool removed = false;
            for (size_t i = 0; i < employees.size(); ++i) {
                if (employees[i].id == id) {
                    employees.erase(employees.begin() + i);
                    removed = true;
                    break;
                }
            }
            if (removed) {
                cout << "Employee deleted successfully.\n";
            } else {
                cout << "Employee not found.\n";
            }
        } else if (choice == 5) {
            cout << "Exiting program.\n";
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

