// 1
// 12
// 123
// 1234
// 12345

#include <iostream>
using namespace std;

int main() {
    int rows = 5;     // Number of rows for the pattern

    for (int i = 1; i <= rows; ++i) { 
        for (int j = 1; j <= i; ++j) { 
            cout << j;        // Print number
        }
        cout << endl;
    }

    return 0;
}