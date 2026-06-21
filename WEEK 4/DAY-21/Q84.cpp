//  Convert lowercase to upper case 

#include <iostream>
#include <string>
using namespace std ;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    for (char &ch :str) {
        if (ch >= 'a' && ch<= 'z'){
            ch-=32;
        }
        cout << "Uppercase : " << str << endl;
    }
}