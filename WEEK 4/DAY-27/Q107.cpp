//  Salary management system
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

int main() {
    vector<Employee> employees;
    int choice;
    
    while (true) {
        cout << "\n--- Salary Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. View All Employees\n";
        cout << "3. Update Salary\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        if (choice == 1) {
            Employee emp;
            cout << "Enter ID: ";
            cin >> emp.id;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, emp.name);
            cout << "Enter Salary: ";
            cin >> emp.salary;
            employees.push_back(emp);
            cout << "Employee added successfully!\n";
        }
        else if (choice == 2) {
            if (employees.empty()) {
                cout << "No employees found!\n";
            } else {
                cout << "\n--- Employees ---\n";
                for (const auto& emp : employees) {
                    cout << "ID: " << emp.id << ", Name: " << emp.name << ", Salary: $" << emp.salary << "\n";
                }
            }
        }
        else if (choice == 3) {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;
            bool found = false;
            for (auto& emp : employees) {
                if (emp.id == id) {
                    cout << "Enter new salary: ";
                    cin >> emp.salary;
                    cout << "Salary updated!\n";
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Employee not found!\n";
        }
        else if (choice == 4) {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;
            for (int i = 0; i < employees.size(); i++) {
                if (employees[i].id == id) {
                    employees.erase(employees.begin() + i);
                    cout << "Employee deleted!\n";
                    break;
                }
            }
        }
        else if (choice == 5) {
            cout << "Exiting...\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }
    
    return 0;
} 

