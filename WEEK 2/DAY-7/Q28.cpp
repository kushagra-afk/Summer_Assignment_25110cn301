//  Recursive reverse of a number function

#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0) {
        return rev; 
    } else {
        rev = rev * 10 + (n % 10); // Add the last digit to the reversed number
        return reverseNumber(n / 10, rev); // Recursive case
    }
}

int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;

    if (number < 0) {
        cout << "Reverse of a negative number is not defined." << endl;
    } else {
        int result = reverseNumber(number);
        cout << "Reverse of " << number << " is " << result << endl;
    }

    return 0;
}