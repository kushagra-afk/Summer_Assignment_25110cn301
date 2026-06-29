// Menu driven string operation system


#include <iostream>
#include <string>
#include <algorithm>
#include <limits>
#include <cstddef>
using namespace std;

int main() {
	string s;
	cout << "Enter initial string: ";
	if (!getline(cin, s)) return 0;

	while (true) {
		cout << "\nMenu:\n"
			<< "1. Display string\n"
			<< "2. Length\n"
			<< "3. Concatenate\n"
			<< "4. Substring (pos,len)\n"
			<< "5. Reverse\n"
			<< "6. Check palindrome\n"
			<< "7. Compare with another string\n"
			<< "8. Find character\n"
			<< "9. Exit\n"
			<< "Choose an option: ";

		int choice;
		if (!(cin >> choice)) break;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if (choice == 9) break;

		switch (choice) {
			case 1:
				cout << "Current string: " << s << '\n';
				break;
			case 2:
				cout << "Length: " << s.size() << '\n';
				break;
			case 3: {
				string t;
				cout << "Enter string to concatenate: ";
				getline(cin, t);
				s += t;
				cout << "Result: " << s << '\n';
				break;
			}
			case 4: {
				size_t pos, len;
				cout << "Enter position (0-based) and length: ";
				if (!(cin >> pos >> len)) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); break; }
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				if (pos > s.size()) cout << "Position out of range\n";
				else cout << "Substring: " << s.substr(pos, len) << '\n';
				break;
			}
			case 5: {
				string t = s;
				reverse(t.begin(), t.end());
				cout << "Reversed: " << t << '\n';
				break;
			}
			case 6: {
				string t = s; 
				string r = t; reverse(r.begin(), r.end());
				cout << (t == r ? "Palindrome" : "Not a palindrome") << '\n';
				break;
			}
			case 7: {
				string t;
				cout << "Enter string to compare: ";
				getline(cin, t);
				int cmp = s.compare(t);
				if (cmp == 0) cout << "Equal\n";
				else if (cmp < 0) cout << "Current string is less than given string\n";
				else cout << "Current string is greater than given string\n";
				break;
			}
			case 8: {
				char c;
				cout << "Enter character to find: ";
				cin >> c; cin.ignore(numeric_limits<streamsize>::max(), '\n');
				auto pos = s.find(c);
				if (pos == string::npos) cout << "Character not found\n";
				else cout << "First occurrence at position " << pos << '\n';
				break;
			}
			default:
				cout << "Invalid option\n";
		}
	}

	cout << "Exiting.\n";
	return 0;
}

