// Union of arrays 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m,n;

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

    vector<int> unionArr;  
    for (int i=0; i<m; i++) {
        int found = 0;
        for (int j=0; j<unionArr.size(); j++) {
            if (arr1[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        if (found==0) {
            unionArr.push_back(arr1[i]);
        }
    }

    for (int i=0; i<n; i++) {
        int found = 0;
        for (int j=0; j<unionArr.size(); j++) {
            if (arr2[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        if (found==0) {
            unionArr.push_back(arr2[i]);
        }
    }

    cout << "Union of arrays : ";
    for (int i=0; i<unionArr.size(); i++) {
        cout << unionArr[i] << " ";
    }
    cout << endl;

    return 0;
}