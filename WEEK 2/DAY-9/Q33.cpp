// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows for the pattern

    for (int i = rows; i >= 1; i--) { 
        for (int j = 1; j <= i; j++) { 
            cout << "*"; // Print '*' for the current row
        }
        cout << endl;
    }

    return 0;
}