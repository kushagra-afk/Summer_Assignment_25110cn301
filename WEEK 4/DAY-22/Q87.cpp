// Character frequency 

#include <iostream>
#include <string>
using namespace std;


int main() {
    string str;
    cout << "Enter a string : " ;
    cin >> str;

    int freq[256] = {0} ;

    for (char ch : str) {
        freq[(int)ch]++ ;
    }
    cout << "Character frequencies : " << endl;

    for (int i=0; i<256; i++) {
        if (freq[i] > 0) {
            cout << "'" << (char)i << " : " << freq[i] << endl ; 
        }
    }

    return 0;
}