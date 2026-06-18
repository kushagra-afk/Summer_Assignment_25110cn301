//  Count Even and Odd Numbers

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, evenCount = 0, oddCount = 0;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n); 

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i+1 << " elements:" ;
        cin >> arr[i]; 
        if (arr[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++; 
        }
    }

    cout << "The count of even numbers in the array is: " << evenCount << endl;
    cout << "The count of odd numbers in the array is: " << oddCount << endl;

    return 0;
}