//                                       Print Armstrong numbers in a range

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the range (a,b) : ";
    cin >> a >> b;

    cout << "Armstrong numbers in the range " << a << "and" << b << " are: " << endl;

    for (int i=a; i<=b; i++) {
        int sum=0, rem;
        int temp=i;
        int digits = to_string(i).length();

        while(temp>0) {
            rem = temp%10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == i) {
            cout << temp << " is an Armstrong number" << endl;
        }
    }

    return 0;

}