// A
// BB
// CCC
// DDDD
// EEEEE

#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows for the pattern

    for (int i = 1; i <= rows; i++) { 
        for (int j = 1; j <= i; j++) { 
            cout << static_cast<char>('A' + i - 1); // Print the corresponding letter
        }
        cout << endl;
    }

    return 0;
}

