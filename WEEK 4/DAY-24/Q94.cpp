//  Compress a string 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter the string : ";
    cin >> s;

    string compressed = "";
    int i=0;

    while (i<(int)s.length()) {
        char ch = s[i];
        int count = 0;
        while (i < (int)s.length() && s[i] == ch){
            count++ ;
            i++ ;
        }
        compressed += ch;
        if (count > 1) {
            compressed += to_string(count);
        }
    }

    cout << "Compressed string : " << compressed << endl ;

    return 0;
}