//  Find sum and average of array 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, sum=0;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n); 

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i+1 << " elements:" ;
        cin >> arr[i]; 
        sum += arr[i]; 
    }

    double average = static_cast<double>(sum) / n;

    cout << "The sum of the array is: " << sum << endl;
    cout << "The average of the array is: " << average << endl;

    return 0;
}