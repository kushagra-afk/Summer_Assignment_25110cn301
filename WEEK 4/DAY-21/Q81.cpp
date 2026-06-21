//  Find string length without strlen()

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int len =0;
    while (str[len] != '\0') {
        len++;
    }
    cout << "Length of " << str << " is " << len << endl;
}