// GCD of two given numbers

#include <iostream>
using namespace std;

int main() {
    int a,b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x=a , y=b;

    while (y!=0) {
        int t=y;
        y = x%y;
        x = t;
    }

    cout << "GCD of " << a << " and " << b << " = " << x << endl;
    
    return 0;
}