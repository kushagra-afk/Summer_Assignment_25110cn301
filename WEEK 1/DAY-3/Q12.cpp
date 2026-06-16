// LCM of two given two numbers

#include <iostream> 
using namespace std;

int main() {
    int a,b;

    cout << "Enter two numbers : ";
    cin >> a >> b;

    int x=a , y=b ;
    while (y!=0) {
        int t = y;
        y = x%y;
        x = t;
    }

    int lcm = a / x*b ;

    cout << "LCM of " << a << " and " << b << " = " << lcm << endl;

    return 0;

}