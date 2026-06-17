//Calculate sum of first N natural numbers.

#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter the number till where the sum is to be calculated : ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers is : " << sum << endl;
    
    return 0;
}