//  Fin maximum occuring character 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the string : ";
    cin >> str;

    int freq[256] = {0} ;

    for ( char ch : str) {
        freq[(int)ch]++ ;
    }

    int maxFreq = 0 ; char maxChar = str[0] ;

    for (int i=0; i<256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
    cout << "Maximum occuring character : '" << maxChar << "' (frequency = " << maxFreq << ")" << endl;

    return 0;

}