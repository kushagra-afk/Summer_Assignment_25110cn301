// Find x^n without pow() 

#include <iostream>
using namespace std;

int main() {
    int x , n;
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (n): ";
    cin >> n;

    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x; // Multiply result by x, n times
    }

    cout << x << "^" << n << " = " << result << endl;


    return 0;
}