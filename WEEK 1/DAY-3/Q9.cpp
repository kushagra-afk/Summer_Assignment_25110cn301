// Check if a number is Prime or not

#include <iostream>
using namespace std ;

int main() {
    int n;

    cout << "Enter a number: " ;
    cin >> n;

    if (n<2) {
        cout << n << " is NOT a prime number" << endl;
    }

    int isPrime = 1;
    for (int i=2; i <=(n/2); i++){
        if (n%i==0){
            isPrime = 0;
            break;
        }
    }
    
    if(isPrime == 1) {
        cout << n << " is a Prime number." << endl;
    } else {
        cout << n << " is NOT a prime number." << endl;
    }

    return 0;
}