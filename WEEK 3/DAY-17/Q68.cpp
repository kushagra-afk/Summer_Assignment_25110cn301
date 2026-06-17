// Find common elements in three arrays

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m,n,o;

    cout << "Enter the size of first array : ";
    cin >> m;
    vector<int> arr1(m);
    for(int i=0; i<m; i++) {
        cout << "Enter the " << i+1 << " element : ";
        cin >> arr1[i];
    }
    cout << endl;

    cout << "Enter the size of second array : ";
    cin >> n;
    vector<int> arr2(n);
    for (int i=0; i<n; i++) {
        cout << "Enter the " << i+1 << " element : ";
        cin >> arr2[i];
    }
    cout << endl;

    cout << "Enter the size of third array : ";
    cin >> o;
    vector<int> arr3(o);
    for (int i=0; i<o; i++) {
        cout << "Enter the " << i+1 << " element : ";
        cin >> arr3[i];
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

    cout << "Third array : ";
    for (int i=0; i<o; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    vector<int> commonArr(min(m,min(n,o)));
    int k = 0;
    
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (arr1[i] == arr2[j]) {
                for (int l=0; l<o; l++) {
                    if (arr1[i] == arr3[l]) {
                        commonArr[k] = arr1[i];
                        k++;
                        break;
                    }
                }
                break;
            }
        }
    }

    cout << "Common elements in three arrays : ";
    for (int i=0; i<k; i++) {
        cout << commonArr[i] << " ";
    }
    
}