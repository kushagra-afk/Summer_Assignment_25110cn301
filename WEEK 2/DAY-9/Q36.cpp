// *****
// *   *
// *   *
// *   *
// *****

#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows for the pattern

    for (int i = 1; i <= rows; i++) { 
        for (int j = 1; j <= rows; j++) { 
            if (i == 1 || i == rows || j == 1 || j == rows) {
                cout << "*"; // Print '*' for the border
            } else {
                cout << " "; // Print space for the inside
            }
        }
        cout << endl;
    }

    return 0;
}
