//  Linear Search

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> A(m, vector<int>(n));

    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter the element " << j+1 << " of row " << i+1 << ": "; 
            cin >> A[i][j];
        }
    }

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == target) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        cout << "Element " << target << " is found in the matrix." << endl;
    } else {
        cout << "Element " << target << " is not found in the matrix." << endl;
    }

    return 0;
}