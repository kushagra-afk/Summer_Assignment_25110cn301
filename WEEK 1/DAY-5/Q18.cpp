//                                 Check strong number

#include <iostream>
using namespace std;

int main() {
    int n, sum=0, rem;

    cout << "Enter a number : ";
    cin >> n;

    int temp=n;

    while(n>0) {
        rem = n%10;
        int fact=1;
        for (int i=1; i<=rem; i++) {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }

    if (temp == sum) {
        cout << temp << " is a strong number" << endl;
    } else {
        cout << temp << " is NOT a strong number" << endl;
    }

    return 0;
}