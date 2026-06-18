// Input and display array 

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

    cout << "The elements in the array are:" ;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}