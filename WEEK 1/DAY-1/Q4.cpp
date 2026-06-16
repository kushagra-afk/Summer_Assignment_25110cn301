// Count digits in a number

#include <iostream>
using namespace std;

int main() {
    int n , count =0;
    
    cout << "Enter a number";
    cin >> n;

    while (n>0) {
        n = n%10;
        count+=1;
        n=n/10;
    }

    cout << "Number of digits in given number are : " << count << endl;

    return 0;
}