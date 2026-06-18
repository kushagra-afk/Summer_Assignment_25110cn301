//  Find largest and smallest number in array 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n); 

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i+1 << " elements:" ;
        cin >> arr[i]; 
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; 
        }
        if (arr[i] < smallest) {
            smallest = arr[i]; 
        }
    }

    cout << "The largest number in the array is: " << largest << endl;
    cout << "The smallest number in the array is: " << smallest << endl;

    return 0;
}