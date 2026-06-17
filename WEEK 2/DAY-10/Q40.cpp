//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print increasing characters
        for (int k = 1; k <= i; k++) {
            cout << char('A' + k - 1);
        }
        // Print decreasing characters
        for (int l = i - 1; l >= 1; l--) {
            cout << char('A' + l - 1);
        }
        cout << endl; 
    }

    return 0;
}