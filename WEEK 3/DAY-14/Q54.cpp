// Frequency of elements in an array

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

    vector<int> freq(n, 0);
    for (int i = 0; i < n; i++) {
        freq[i] = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq[i]++;
                arr[j] = -1; // Mark as counted
            }
        }
    }

    cout << "Frequency of elements in the array:" << endl;
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) { // Only print if not marked
            cout << "Element " << arr[i] << " occurs " << freq[i] << " times." << endl;
        }
    }

    return 0;
}