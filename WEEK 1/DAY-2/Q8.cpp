// Palindrome

#include <iostream>
using namespace std;

int main() {
    int n , rev=0 ;

    cout << "Enter a number :";
    cin >> n;

    int temp=n;
    while(temp>0) {
        rev = rev*10 + (temp%10);
        temp = temp/10;
    }

    if (n == rev) {
        cout << n << " is a palindrome number" << endl;
    }
    else {
        cout << n << " is not a plaindrome number" << endl;
    }

    return 0;
}