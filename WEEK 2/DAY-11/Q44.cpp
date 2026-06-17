//  Function to find factorial 

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) return -1; // Factorial is not defined for negative numbers
    if (n == 0 || n == 1) return 1; // Factorial of 0 and 1 is 1
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    cout << result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = factorial(num);
    if (result <0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << result << endl;
    }

    return 0;
}