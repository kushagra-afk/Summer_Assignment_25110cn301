//  Reverse a string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter any word : ";
    cin >> str;

    int left = 0 , right = str.length() -1;
    while (left < right) {
        swap(str[left++] , str[right--]);

    }

    cout << "Reversed string : " << str << endl;
}