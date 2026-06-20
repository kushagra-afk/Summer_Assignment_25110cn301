//  Find row wise sum 

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

    // Calculate row-wise sum
    vector<int> rowSums(rows, 0);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Display row-wise sums
    cout << "Row-wise sums:" << endl;
    for (int i = 0; i < rows; i++) {
        cout << "Sum of row " << i + 1 << ": " << rowSums[i] << endl;
    }

    return 0;
}