//                                                          Nth Fibonacci term

#include <iostream>
using namespace std;

int main() {
    int n, a=0 , b=1 , c;

    cout << "Enter n: ";
    cin >> n;

    if (n==1) {
        cout << "Nth fibonacci term = " << a << endl;
    } if (n==2) {
        cout << "Nth fibonacci term = " << b << endl ;
    }

    for (int i=3; i<=n; i++) {
        c=a+b;
        a=b;
        b=c;
    }

    cout << "Fibonacci term = " << b << endl ;

    return 0;
}