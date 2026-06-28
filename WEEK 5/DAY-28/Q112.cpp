//  contact management system

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

void addContact(vector<Contact>& contacts) {
    Contact c;
    cout << "Enter name: ";
    getline(cin, c.name);
    cout << "Enter phone: ";
    getline(cin, c.phone);
    cout << "Enter email: ";
    getline(cin, c.email);
    contacts.push_back(c);
    cout << "Contact added.\n";
}

void listContacts(const vector<Contact>& contacts) {
    if (contacts.empty()) {
        cout << "No contacts available.\n";
        return;
    }
    for (size_t i = 0; i < contacts.size(); ++i) {
        const Contact& c = contacts[i];
        cout << i + 1 << ". " << c.name << " | " << c.phone << " | " << c.email << "\n";
    }
}

void searchContact(const vector<Contact>& contacts) {
    string query;
    cout << "Enter name to search: ";
    getline(cin, query);
    bool found = false;
    for (const auto& c : contacts) {
        if (c.name.find(query) != string::npos) {
            cout << c.name << " | " << c.phone << " | " << c.email << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Contact not found.\n";
    }
}

void deleteContact(vector<Contact>& contacts) {
    listContacts(contacts);
    if (contacts.empty()) return;
    cout << "Enter contact number to delete: ";
    int index;
    if (!(cin >> index)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.\n";
        return;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (index < 1 || index > static_cast<int>(contacts.size())) {
        cout << "Invalid contact number.\n";
        return;
    }
    contacts.erase(contacts.begin() + index - 1);
    cout << "Contact deleted.\n";
}

int main() {
    vector<Contact> contacts;
    while (true) {
        cout << "\nContact Management System\n";
        cout << "1. Add contact\n";
        cout << "2. List contacts\n";
        cout << "3. Search contact\n";
        cout << "4. Delete contact\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        int choice;
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid option.\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (choice) {
            case 1: addContact(contacts); break;
            case 2: listContacts(contacts); break;
            case 3: searchContact(contacts); break;
            case 4: deleteContact(contacts); break;
            case 5: return 0;
            default: cout << "Invalid option.\n"; break;
        }
    }
    return 0;
}
