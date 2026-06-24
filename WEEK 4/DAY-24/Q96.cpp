//  Remove duplicate characters

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string : " ;
    cin >> s;

    string result = "";

    bool seen[256] = {false};

    for (char ch:s) {
        if (!seen[(int)ch]) {
            result += ch;
            seen[(int)ch] = true;
        }
    }

    cout << "String after removing duplicates : " << result << endl ;

    return 0 ;
}