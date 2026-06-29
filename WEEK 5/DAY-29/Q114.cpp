// Menu driven array operation system
// Menu driven array operation system
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	const int MAX = 100;
	int arr[MAX];
	int n = 0;
	int choice;

	while (true) {
		cout << "\nMenu:\n";
		cout << "1. Insert element\n";
		cout << "2. Delete element\n";
		cout << "3. Display array\n";
		cout << "4. Search element\n";
		cout << "5. Sort array\n";
		cout << "6. Exit\n";
		cout << "Enter choice: ";
		if (!(cin >> choice)) break;

		if (choice == 1) {
			if (n >= MAX) { cout << "Array is full\n"; continue; }
			int val, pos;
			cout << "Enter value to insert: "; cin >> val;
			cout << "Enter position (0 to " << n << "): "; cin >> pos;
			if (pos < 0 || pos > n) { cout << "Invalid position\n"; continue; }
			for (int i = n; i > pos; --i) arr[i] = arr[i-1];
			arr[pos] = val; ++n;
		} else if (choice == 2) {
			if (n == 0) { cout << "Array is empty\n"; continue; }
			int pos;
			cout << "Enter position to delete (0 to " << n-1 << "): "; cin >> pos;
			if (pos < 0 || pos >= n) { cout << "Invalid position\n"; continue; }
			for (int i = pos; i < n-1; ++i) arr[i] = arr[i+1];
			--n;
		} else if (choice == 3) {
			if (n == 0) { cout << "Array is empty\n"; continue; }
			cout << "Array elements: ";
			for (int i = 0; i < n; ++i) cout << arr[i] << (i+1<n? ' ':'\n');
		} else if (choice == 4) {
			if (n == 0) { cout << "Array is empty\n"; continue; }
			int key; cout << "Enter element to search: "; cin >> key;
			int idx = -1;
			for (int i = 0; i < n; ++i) if (arr[i] == key) { idx = i; break; }
			if (idx == -1) cout << "Not found\n"; else cout << "Found at index " << idx << "\n";
		} else if (choice == 5) {
			if (n <= 1) { cout << "Array too small to sort\n"; continue; }
			sort(arr, arr + n);
			cout << "Array sorted\n";
		} else if (choice == 6) {
			cout << "Exiting...\n";
			break;
		} else {
			cout << "Invalid choice\n";
		}
	}
	return 0;
}

