// Intersection of arrays 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;

    cout << "Enter the size of first array : ";
    cin >> m;
    vector<int> arr1(m);
    for (int i = 0; i < m; i++) {
        cout << "Enter the " << i + 1 << " element : ";
        cin >> arr1[i];
    }
    cout << endl;

    cout << "Enter the size of second array : ";
    cin >> n;
    vector<int> arr2(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " element : ";
        cin >> arr2[i];
    }
    cout << endl;

    cout << "First array : ";
    for (int i = 0; i < m; i++) cout << arr1[i] << " ";
    cout << endl;

    cout << "Second array : ";
    for (int i = 0; i < n; i++) cout << arr2[i] << " ";
    cout << endl;

    vector<int> intersectionArr;
    int k = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                intersectionArr.push_back(arr1[i]);  // grows the vector safely
                k++;
                break;
            }
        }
    }

    cout << "Intersection array : ";
    for (int i = 0; i < k; i++) {
        cout << intersectionArr[i] << " ";
    }
    cout << endl;

    return 0;
}