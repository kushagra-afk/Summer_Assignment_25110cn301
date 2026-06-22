// Remove spaces from string 

#include <iostream>
#include <string>
using namespace std;


int main() {
    string str;
    cout << "Enter a string : " ;
    cin.ignore();
    getline(cin,str);

    string result = "";

    for (char ch : str) {
        if (ch != ' ') {
            result += ch;
        }
    }

    cout << "String after removing spaces : " << result << endl;

    return 0;
}