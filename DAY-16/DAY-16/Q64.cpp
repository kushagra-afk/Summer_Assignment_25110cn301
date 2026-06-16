// Remove duplicates from an array

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
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

    vector<int> uniqueArr;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < uniqueArr.size(); j++) {
            if (arr[i] == uniqueArr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            uniqueArr.push_back(arr[i]);
        }
    }

    cout << "Array after removing duplicates : ";
    for (int i = 0; i < uniqueArr.size(); i++) {
        cout << uniqueArr[i] << " ";
    }
    cout << endl;

    return 0;
}