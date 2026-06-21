//  Count vowels and consonants 

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    int vowels = 0;
    int consonants = 0;

    for (char c : text) {
        if (isalpha(static_cast<unsigned char>(c))) {
            char lower = tolower(static_cast<unsigned char>(c));
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        }
    }

    cout << "Vowels: " << vowels << '\n';
    cout << "Consonants: " << consonants << '\n';
    return 0;
}
