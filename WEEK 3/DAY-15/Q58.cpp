// Rotate array to left 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n ;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    int firstElement = arr[0];

    for (int i=0; i<n; i++) {
        cout << "Enter the " << i << " element : ";
        cin >> arr[i];
    }
    
    cout << "Entered array : ";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for(int i=0; i,n-1; i++) {
        arr[i] = arr[i+1];
    }

    arr[n-1] = firstElement;

    cout << "Rotated array : ";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}