// Check palindrome string 

#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string : " ;
    cin >> str;

    string rev = str;
    int left=0 , right = str.length()-1;
    while (left < right ) {
        swap(rev[left++],rev[right--]) ;
    }

    if ( str == rev) {
        cout << "\"" << str << "\" is a palindrome " << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome " << endl;
    }

    return 0;

}