// Find duplicates in an array 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    vector<int> duplicates;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                if (find(duplicates.begin(), duplicates.end(), arr[i]) == duplicates.end()) {
                    duplicates.push_back(arr[i]);
                }
            }
        }
    }

    if (!duplicates.empty()) {
        cout << "Duplicate elements in the array are: ";
        for (int dup : duplicates) {
            cout << dup << " ";
        }
        cout << endl;
    } else {
        cout << "No duplicate elements found in the array." << endl;
    }

    return 0;
}