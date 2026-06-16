// Product of digits

#include <iostream>
using namespace std;

int main() {
    int n , product = 1;

    cout << "Enter a number :";
    cin >> n;

    int temp;

    while (n>0){
        temp = n%10;
        product = product*temp;
        n = n/10;
    }

    cout << "Product of the given number is : " << product << endl;
    
    return 0;
}