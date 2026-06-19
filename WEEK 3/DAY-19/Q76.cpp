// Diagonal sum of a matrix

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

    int DiagonalSum = 0;

    // Calculating the sum of  and secondary diagonals
    for (int i = 0; i < m; i++) {
        DiagonalSum += A[i][i]; //  diagonal
    }

    cout << "Matrix A : " << endl ;
    for (int i=0; i<m ; i++) {
        for ( int j=0; j<n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The sum of the  diagonal is: " << DiagonalSum << endl;

    return 0;
}