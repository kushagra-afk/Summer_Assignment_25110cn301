// Rotate array to right 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of array: " ;
    cin >> n;

    vector<int> arr(n);

    int last = arr[n-1];

    for (int i=0; i<n; i++) {
        cout << "Enter the " << i << "element : ";
        cin >> arr[i] ;
    }

    cout << "Entered array : ";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    for (int i=n-1; i>0; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[0] = last;
    
    cout << "Rotated array : ";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}

