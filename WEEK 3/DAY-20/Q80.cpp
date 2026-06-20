//  Find column wise sum 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element " << j + 1 << " of row " << i + 1 << ": ";
            cin >> matrix[i][j];
        }
    }

    // Calculate column-wise sum
    vector<int> colSums(cols, 0);
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            colSums[j] += matrix[i][j];
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Display column-wise sums
    cout << "Column-wise sums:" << endl;
    for (int j = 0; j < cols; j++) {
        cout << "Sum of column " << j + 1 << ": " << colSums[j] << endl;
    }

    return 0;
}