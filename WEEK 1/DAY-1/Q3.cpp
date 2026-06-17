// Faactorial of a number

#include <iostream>
using namespace std;

int main() {
    int n ;
    int fact = 1;

    cout << "Enter the number for which factorial is to be calculated : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        fact*=i;
    }

    cout << fact;
    return 0;
}