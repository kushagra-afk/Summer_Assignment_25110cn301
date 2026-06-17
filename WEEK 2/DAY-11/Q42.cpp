//  Funtion to find maximum 

#include <iostream>
using namespace std;

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = maximum(num1, num2);
    cout << "Maximum number is : " << result << endl;

    return 0;
}