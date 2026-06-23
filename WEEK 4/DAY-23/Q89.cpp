//  Find first non-repeating character 

#include <iostream>
#include <string>
using namespace std ;

int main() {
    string str;
    cout << "Enter the string : ";
    cin >> str;

    int freq[256] = {0} ;
    for (char ch : str ) {
        freq[(int)ch]++ ;
    }
    for ( char ch : str ) {
        if (freq[(int)ch] == 1 ){
            cout << "First non-repeating character : " << ch << "'" << endl ;
            return;
        }
    }

    cout << "No non-repeating character found." << endl;

    return 0;
}