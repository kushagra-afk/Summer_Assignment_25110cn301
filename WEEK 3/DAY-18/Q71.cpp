// Binary Search 

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i+1 << " elements: ";
        cin >> arr[i];
    }

    cout << "Enter the target element to search: ";
    cin >> target;

    // Binary search algorithm
    int left = 0, right = n - 1;
    bool found = false;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            found = true;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}