// Count set bits in a number

#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    // Count set bits using Brian Kernighan's algorithm
    while (n > 0) {
        n = n & (n - 1); // Clear the least significant bit set
        count++;
    }

    cout << "Number of set bits: " << count << endl;

    return 0;
}