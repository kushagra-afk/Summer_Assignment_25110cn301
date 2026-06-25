// Find comman characters in strings 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 ,str2;

    cout << "Enter the first string: ";
    cin>> str1;
    cout << "Enter the secont string : ";
    cin >> str2;

    cout << "Common characters : " ;
    bool seen[256] = {false} ;
    bool printed[256] = {false} ;

    for (char ch : str1) {
        seen[(int)ch] = true ;
    } 
    for (char ch : str2) {
        if (seen[(int)ch] && !printed[(int)ch]) {
            cout << ch << " " ;
            printed[(int)ch] = true ;
        }
    }

    cout << endl;

}