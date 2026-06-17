//     1
//    121
//   12321
//  1234321
// 123454321

#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print increasing numbers
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        // Print decreasing numbers
        for (int l = i - 1; l >= 1; l--) {
            cout << l;
        }
        cout << endl; 
    }

    return 0;
}