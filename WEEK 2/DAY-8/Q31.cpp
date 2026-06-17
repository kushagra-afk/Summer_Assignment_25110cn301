// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows for the pattern

    for (int i = 1; i <= rows; ++i) { 
        for (char j = 'A'; j < 'A' + i; ++j) { 
            cout << j;        // Print character
        }
        cout << endl;
    }

    return 0;
}