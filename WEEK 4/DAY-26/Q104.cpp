// Quiz application

#include <iostream>
#include <string>
using namespace std;

struct Question {
    string question;
    string options[4];
    int correctOption; // 1-4
};

void q103() {
    // --- Quiz Data ---
    Question quiz[] = {
        {
            "What does OOP stand for?",
            {"Object Oriented Programming", "Open Object Processing","Ordered Object Protocol", "Object Output Program"},
            1
        },
        {
            "Which symbol is used for single-line comments in C++?",
            {"/* */", "//", "#", "--"},
            2
        },
        {
            "What is the size of 'int' on most 64-bit systems?",
            {"2 bytes", "8 bytes", "4 bytes", "16 bytes"},
            3
        },
        {
            "Which loop is guaranteed to execute at least once?",
            {"for loop", "while loop", "do-while loop", "range loop"},
            3
        },
        {
            "What is 'cin' used for in C++?",
            {"Output to screen", "Input from keyboard","File reading", "Memory allocation"},
            2
        },
        {
            "Which keyword is used to define a constant in C++?",
            {"final", "static", "const", "fixed"},
            3
        },
        {
            "What does 'endl' do in C++?",
            {"Ends the program", "Inserts newline and flushes buffer","Deletes last output", "Ends a loop"},
            2
        },
        {
            "Which data type stores true/false values?",
            {"int", "char", "float", "bool"},
            4
        },
        {
            "What is the correct syntax to declare an array of 5 ints?",
            {"int arr{5}", "array<int> arr(5)", "int arr[5]", "int[5] arr"},
            3
        },
        {
            "Which operator is used to access members of a pointer to struct?",
            {".", "::", "->", "&"},
            3
        }
    };

    int totalQuestions = 10;
    int score = 0;
    int answer;

    cout << "==============================" << endl;
    cout << "      C++ QUIZ APPLICATION    " << endl;
    cout << "==============================" << endl;
    cout << "Total Questions : " << totalQuestions << endl;
    cout << "Each correct answer = 1 point" << endl;
    cout << "------------------------------" << endl;

    // --- Quiz Loop ---
    for (int i = 0; i < totalQuestions; i++) {
        cout << "\nQ" << (i + 1) << ". " << quiz[i].question << endl;
        for (int j = 0; j < 4; j++) {
            cout << "  " << (j + 1) << ". " << quiz[i].options[j] << endl;
        }

        // --- Input Validation ---
        do {
            cout << "Your answer (1-4): ";
            cin >> answer;
            if (answer < 1 || answer > 4)
                cout << "Invalid! Enter a number between 1 and 4." << endl;
        } while (answer < 1 || answer > 4);

        if (answer == quiz[i].correctOption) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! Correct answer: " << quiz[i].options[quiz[i].correctOption - 1] << endl;
        }
    }

    // --- Result ---
    cout << "\n==============================" << endl;
    cout << "         QUIZ RESULTS         " << endl;
    cout << "==============================" << endl;
    cout << "Score     : " << score << " / " << totalQuestions << endl;
    cout << "Percentage: " << (score * 100 / totalQuestions) << "%" << endl;

    // --- Grade ---
    cout << "Grade     : ";
    if (score == totalQuestions)
        cout << "Perfect! Outstanding!" << endl;
    else if (score >= 8)
        cout << "A - Excellent!" << endl;
    else if (score >= 6)
        cout << "B - Good Job!" << endl;
    else if (score >= 4)
        cout << "C - Average. Keep Practicing!" << endl;
    else
        cout << "F - Need More Study!" << endl;

    cout << "==============================" << endl;
}

int main() {
    q103();
    return 0;
}