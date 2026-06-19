// Add Matrices 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> A(m, vector<int>(n));
    vector<vector<int>> B(m, vector<int>(n));
    vector<vector<int>> C(m, vector<int>(n));

    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter the element " << j+1 << " of row " << i+1 << ": "; 
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter the element " << j+1 << " of row " << i+1 << ": "; 
            cin >> B[i][j];
        }
    }

    // Adding matrices A and B to get C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "The resulting matrix C after addition is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}