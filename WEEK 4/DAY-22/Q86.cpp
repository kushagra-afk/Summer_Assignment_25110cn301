// Count words in a sentence 

#include <iostream>
#include <string>
using namespace std;


int main() {
    string str;
    cout << "Enter a string : " ;
    cin.ignore() ;
    getline(cin , str);

    int count =0;
    bool inWord = false;

    for (char ch : str ) {
        if ( ch!= ' ' && !inWord) {
            count++;
            inWord=true;
        } else if (ch == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words : " << count << endl;

    return 0;

}