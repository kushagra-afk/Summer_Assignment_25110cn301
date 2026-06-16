// Find pair with given sum in array

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, sum;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i+1 <<  " element of array : ";
        cin >> arr[i];
    }

    cout << "Entered array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the sum to find pair : ";
    cin >> sum;

    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                found = 1;
            }
        }
    }

    if (found==0) {
        cout << "No pair found with the given sum." << endl;
    }

    return 0;
}