//  Transpose of a matrix

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> A(m, vector<int>(n));
    vector<vector<int>> T(n, vector<int>(m));

    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter the element " << j+1 << " of row " << i+1 << ": "; 
            cin >> A[i][j];
        }
    }

    // Transposing matrix A to get T
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }

    cout << "Matrix A :" << endl;
    for (int i = 0; i < n; i++) {   
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The resulting matrix T after transposition is:" << endl;
    for (int i = 0; i < n; i++) {   
        for (int j = 0; j < m; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}