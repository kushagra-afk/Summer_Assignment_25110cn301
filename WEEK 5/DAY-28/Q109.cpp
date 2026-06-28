#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool available;
};

void addBook(vector<Book> &library) {
    Book book;
    cout << "Enter book ID: ";
    cin >> book.id;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter book title: ";
    getline(cin, book.title);
    cout << "Enter author name: ";
    getline(cin, book.author);
    book.available = true;
    library.push_back(book);
    cout << "Book added successfully.\n";
}

void displayBooks(const vector<Book> &library) {
    if (library.empty()) {
        cout << "No books in library.\n";
        return;
    }
    cout << "\nLibrary Catalog:\n";
    for (const auto &book : library) {
        cout << "ID: " << book.id
                  << " | Title: " << book.title
                  << " | Author: " << book.author
                  << " | " << (book.available ? "Available" : "Borrowed") << '\n';
    }
}

void searchBooks(const vector<Book> &library) {
    if (library.empty()) {
        cout << "No books in library.\n";
        return;
    }
    cout << "Enter search term (title or author): ";
    string term;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, term);
    bool found = false;
    for (const auto &book : library) {
        string title = book.title;
        string author = book.author;
        transform(title.begin(), title.end(), title.begin(), ::tolower);
        transform(author.begin(), author.end(), author.begin(), ::tolower);
        string lowTerm = term;
        transform(lowTerm.begin(), lowTerm.end(), lowTerm.begin(), ::tolower);
        if (title.find(lowTerm) != string::npos || author.find(lowTerm) != string::npos) {
            cout << "ID: " << book.id
                      << " | Title: " << book.title
                      << " | Author: " << book.author
                      << " | " << (book.available ? "Available" : "Borrowed") << '\n';
            found = true;
        }
    }
    if (!found) {
        cout << "No matching books found.\n";
    }
}

void changeBookStatus(vector<Book> &library, bool borrow) {
    if (library.empty()) {
        cout << "No books in library.\n";
        return;
    }
    int id;
    cout << "Enter book ID: ";
    cin >> id;
    for (auto &book : library) {
        if (book.id == id) {
            if (borrow) {
                if (!book.available) {
                    cout << "Book is already borrowed.\n";
                    return;
                }
                book.available = false;
                cout << "Book borrowed successfully.\n";
            } else {
                if (book.available) {
                    cout << "Book is not currently borrowed.\n";
                    return;
                }
                book.available = true;
                cout << "Book returned successfully.\n";
            }
            return;
        }
    }
    cout << "Book ID not found.\n";
}

int main() {
    vector<Book> library;
    while (true) {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Borrow Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Choose an option: ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                addBook(library);
                break;
            case 2:
                displayBooks(library);
                break;
            case 3:
                searchBooks(library);
                break;
            case 4:
                changeBookStatus(library, true);
                break;
            case 5:
                changeBookStatus(library, false);
                break;
            case 6:
                cout << "Exiting system.\n";
                return 0;
            default:
                cout << "Invalid option, please try again.\n";
        }
    }
    return 0;
}
