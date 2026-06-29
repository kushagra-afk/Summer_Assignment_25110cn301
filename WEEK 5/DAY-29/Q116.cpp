// inventory

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

void displayInventory(const vector<Item>& inventory) {
    if (inventory.empty()) {
        cout << "Inventory is empty.\n";
        return;
    }

    cout << left << setw(6) << "ID"
        << setw(20) << "Name"
        << setw(10) << "Quantity"
        << setw(10) << "Price" << "\n";
    cout << string(46, '-') << "\n";
    for (const auto& item : inventory) {
        cout << left << setw(6) << item.id
            << setw(20) << item.name
            << setw(10) << item.quantity
            << setw(10) << fixed << setprecision(2) << item.price
            << "\n";
    }
}

void addItem(vector<Item>& inventory) {
    Item item;
    cout << "Enter item ID: ";
    cin >> item.id;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter item name: ";
    getline(cin, item.name);
    cout << "Enter quantity: ";
    cin >> item.quantity;
    cout << "Enter price: ";
    cin >> item.price;
    inventory.push_back(item);
    cout << "Item added successfully.\n";
}

void removeItem(vector<Item>& inventory) {
    if (inventory.empty()) {
        cout << "Inventory is empty. Nothing to remove.\n";
        return;
    }

    int id;
    cout << "Enter item ID to remove: ";
    cin >> id;
    for (auto it = inventory.begin(); it != inventory.end(); ++it) {
        if (it->id == id) {
            inventory.erase(it);
            cout << "Item removed successfully.\n";
            return;
        }
    }
    cout << "Item with ID " << id << " not found.\n";
}

void updateItem(vector<Item>& inventory) {
    if (inventory.empty()) {
        cout << "Inventory is empty. Nothing to update.\n";
        return;
    }

    int id;
    cout << "Enter item ID to update: ";
    cin >> id;
    for (auto& item : inventory) {
        if (item.id == id) {
            cout << "Enter new quantity: ";
            cin >> item.quantity;
            cout << "Enter new price: ";
            cin >> item.price;
            cout << "Item updated successfully.\n";
            return;
        }
    }
    cout << "Item with ID " << id << " not found.\n";
}

int main() {
    vector<Item> inventory;
    int choice = 0;

    while (true) {
        cout << "\nInventory Management System\n";
        cout << "1. Display inventory\n";
        cout << "2. Add item\n";
        cout << "3. Remove item\n";
        cout << "4. Update item\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayInventory(inventory);
                break;
            case 2:
                addItem(inventory);
                break;
            case 3:
                removeItem(inventory);
                break;
            case 4:
                updateItem(inventory);
                break;
            case 5:
                cout << "Exiting system.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
}

