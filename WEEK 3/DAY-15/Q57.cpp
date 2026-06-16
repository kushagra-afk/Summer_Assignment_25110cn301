// reverse array

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter size of an array: ";
    cin >> n;

    vector<int> arr(n);

    for (int i=0; i<n; i++) {
        cout << "Enter the " << i << " element : ";
        cin >> arr[i];
    }

    cout << "Entered array : ";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> revArr(n);

    for(int i = 0; i<n; i++) {
        revArr[i] = arr[n-1-i];
    }

    cout << "Reversed array : ";

    for(int i = 0; i < n; i++) {
        cout << revArr[i] << " ";
    }


}