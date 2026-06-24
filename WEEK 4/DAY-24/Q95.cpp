//  Find longest word

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence : ";
    cin.ignore() ;
    getline(cin, s);

    string longest = "", current = "" ;

    for (int i=0; i<=(int)s.length(); i++) {
        if (i < (int)s.length() && s[i] != ' ') {
            current += s[i];
        } else {
            if (current.length() > longest.length()) {
                longest = current ;
                current = "" ;
            }
        }
    }

    cout << "Longest word : " << longest << endl;

    return 0;
}