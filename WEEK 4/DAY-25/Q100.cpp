// Sort words by length

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of names: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter words : ";
    for (int i=0; i<n; i++) {
        cin >> words[i] ;
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (words[j].length() > words[j+1].length()) {
                swap(words[j] , words[j+1]) ;
            }
        }
    }

    cout << "Words sorted by length : " ;
    for (int i=0; i<n; i++) {
        cout << words[i] << endl ;
    }
    
    return 0;
}