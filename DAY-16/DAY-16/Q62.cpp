// Find maximum frequency element in array

#include <iostream>
#include <vector> // iused vector because (int arr[n]) was giving error(only constant allowed) , vector is more flexible , we can store memory dynamically 
using namespace std;

int main() {
    int n ;
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

    int maxCount = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum frequency element is : " << maxElement << " with frequency : " << maxCount << endl;

    return 0;
}