// Find Prime numbers in a given range

#include <iostream>
using namespace std;

int main() {
    int a ,b ;

    cout << "Enter range (a,b): " ;
    cin >> a >> b;

    cout << "Prime numbers in the range " << a << "-" << b << " : ";
    
    for (int i=a; i <=b ; i++) {
        if(i<2) {
            continue;
        }
            int isPrime = 1 ;
        for (int j=2; j <= (i/2); j++){
            if(i%j==0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            cout << i << " ";
        }
        
    }
    cout << endl;

}