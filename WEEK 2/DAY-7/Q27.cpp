//  Recursive sum of digits function

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // sum of digits of 0 is 0
    } else {
        return (n % 10) + sumOfDigits(n / 10); // Recursive case
    }
}

int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;

    if (number < 0) {
        cout << "Sum of digits is not defined for negative numbers." << endl;
    } else {
        int result = sumOfDigits(number);
        cout << "Sum of digits of " << number << " is " << result << endl;
    }

    return 0;
}