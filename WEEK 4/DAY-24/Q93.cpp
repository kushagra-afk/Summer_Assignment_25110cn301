//  Check string rotation 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 , s2;
    cout << "Enter the first string : ";
    cin >> s1;
    cout << "Enter the second string : ";
    cin >> s2 ;

    if (s1.size()!= s2.size()) {
        cout << "Strings are NOT rotations of each other." << endl ;
        return 0;
    }

    string doubled = s1 + s2 ;
    if (doubled.find(s2) != string::npos) {
        cout << "\"" << s2 << "\" IS a rotation of \"" << s1 << "\"." << endl ;
    }else {
        cout << "\"" << s2 << "\" is NOT a rotation of \"" << s1 << "\"." << endl ;
    }

    return 0;
}    