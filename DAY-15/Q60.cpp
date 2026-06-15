// Move zeroes to end

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    
    for(int i=0; i<n; i++) {
        cout << "Enter the " << i << " element : ";
        cin >> arr[i] ;
    }

    cout << "Entered array : ";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int pos = 0;

    for (int i=0; i<n; i++) {
        if (arr[i] != 0) {
            arr[pos++] = arr[i];
        }
    }

    while (pos<n){
        arr[pos++] =0;
    }

    cout << "Array after moving zeroes to end: ";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " " ;
    }

    return 0;
}