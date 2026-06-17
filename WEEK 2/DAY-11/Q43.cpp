//  Funtion to check prime number

#include <iostream>
using namespace std;

int isPrime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return 0; // Not a prime number
    }
    return 1; // Prime number
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}