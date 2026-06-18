//  Function for Fibonacci number

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) return 0; 
    if (n == 1) return 1; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int n;
    cout << "Enter the position in Fibonacci sequence: ";
    cin >> n;

    int result = fibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}