//                                               Check Armstrong number


#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int n, sum=0, rem;

    cout << "Enter a number : ";
    cin >> n;

    int temp=n;
    int digits = to_string(n).length();

    while(n>0) {
        rem = n%10;
        sum += pow(rem, digits);
        n /= 10;
    }

    if (temp == sum) {
        cout << temp << " is an Armstrong number";
    } else {
        cout << temp << " is NOT an Armstrong number";
    }

    return 0;
}