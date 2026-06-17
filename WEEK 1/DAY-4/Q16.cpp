//                                       Print Armstrong numbers in a range

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int lower, upper;

    cout << "Enter lower limit : ";
    cin >> lower;

    cout << "Enter upper limit : ";
    cin >> upper;

    cout << "Armstrong numbers between " << lower << " and " << upper << " are : ";
    for (int i=lower; i<=upper; i++) {
        int sum=0, rem, temp=i;
        int digits = to_string(i).length();

        while(temp>0) {
            rem = temp%10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == i) {
            cout << i << " ";
        }
    }

    return 0;

}