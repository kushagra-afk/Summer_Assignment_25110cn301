//  Recursive Fibonacci function

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0; // Fibonacci of 0 is 0
    } else if (n == 1) {
        return 1; // Fibonacci of 1 is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;

    if (number < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    } else {
        int result = fibonacci(number);
        cout << "Fibonacci of " << number << " is " << result << endl;
    }

    return 0;
}