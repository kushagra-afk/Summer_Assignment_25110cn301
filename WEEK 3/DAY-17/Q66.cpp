// Union of arrays 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m,n;

    vector<int> arr1(m);
    cout << "Enter the size of first array : ";
    cin >> m;
    for(int i=0; i<m; i++) {
        cout << "Enter the " << i+1 << " element : ";
        cin >> arr1[i];
    }
    cout << endl;

    vector<int> arr2(n);
    cout << "Enter the size of second array : ";
    cin >> n;
    for (int i=0; i<n; i++) {
        cout << "Enter the " << i+1 << " element : ";
        cin >> arr2[i];
    }
    cout << endl;

    cout << "First array : ";
    for (int i=0; i<m; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Second array : ";
    for (int i=0; i<n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    

}