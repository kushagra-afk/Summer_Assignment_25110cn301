//  Decimal to binary 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int binary[32]; // Array to store binary digits
    int i = 0;

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2; // Store remainder (0 or 1)
        n = n / 2;         // Update n to the quotient
        i++;
    }

    cout << "Binary representation: ";
    // Print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;

    return 0;
}