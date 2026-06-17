// Binary to decimal

#include <iostream>
using namespace std;

int main() {
    int binary[32]; // Array to store binary digits
    int n, decimal = 0;

    cout << "Enter the number of binary digits: ";
    cin >> n;

    cout << "Enter the binary number (one digit at a time): ";
    for (int i = 0; i < n; i++) {
        cin >> binary[i];
    }

    // Convert binary to decimal
    for (int i = 0; i < n; i++) {
        decimal += binary[i] * (1 << (n - 1 - i)); // Using bitwise shift for power of 2
    }

    cout << "Decimal representation: " << decimal << endl;

    return 0;
}