// Recursive factorial function

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 1 || n == 0) {
        return 1; // factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(number);
        cout << "Factorial of " << number << " is " << result << endl;
    }

    return 0;
}