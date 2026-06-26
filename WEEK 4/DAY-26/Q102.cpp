//  Voting Eligibilty system 

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "--- Voting Eligibity System ---" << endl ;

    string name;
    int age;
    char citizen;
    cout << "Enter your name : " ; cin >> name;
    cout << "Enter your age : " ; cin >> age;
    cout << "Are you a citizen? (y/n) : " ; cin >> citizen;

    if (age >= 18 && (citizen == 'y' || citizen == 'Y')) {
        cout << name << " , you are eligible to vote." << endl;
    } else if (age < 18) {
        cout << name << " , you are not eligible to vote. (under 18)" << endl;
    } else {
        cout << name << " , you are not eligible to vote. (not a citizen)" << endl;
    }

    return 0;
}