// Sum of digits of a number

#include <iostream>
using namespace std;

int main() {

    int n;
    
    cout << "Enter a number: ";
    cin >> n ;

    int sum = 0;
    int temp = n;

    while (temp>0) {
        sum+= temp%10;
        temp=temp/10;
    }

    cout << "Sum of the digits of " << n << " = " << sum << endl;


    return 0;
}