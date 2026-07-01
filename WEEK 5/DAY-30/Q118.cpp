#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int id;
    bool available;
};

void showMenu() {
    cout << "Mini Library System\n";
    cout << "1. Add book\n";
    cout << "2. Display books\n";
    cout << "3. Search book by title\n";
    cout << "4. Borrow book\n";
    cout << "5. Return book\n";
    cout << "6. Exit\n";
    cout << "Choose an option: ";
}

int findBookById(const vector<Book>& library, int id) {
    for (size_t i = 0; i < library.size(); ++i) {
        if (library[i].id == id) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int findBookByTitle(const vector<Book>& library, const string& title) {
    for (size_t i = 0; i < library.size(); ++i) {
        if (library[i].title == title) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

void displayBooks(const vector<Book>& library) {
    if (library.empty()) {
        cout << "No books in the library.\n";
        return;
    }
    cout << "ID\tTitle\tAuthor\tStatus\n";
    for (const auto& book : library) {
        cout << book.id << '\t' << book.title << '\t' << book.author << '\t';
        cout << (book.available ? "Available" : "Borrowed") << '\n';
    }
}

int main() {
    vector<Book> library;
    int nextId = 1;
    int choice = 0;

    while (true) {
        showMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 1) {
            Book book;
            cout << "Enter title: ";
            getline(cin, book.title);
            cout << "Enter author: ";
            getline(cin, book.author);
            book.id = nextId++;
            book.available = true;
            library.push_back(book);
            cout << "Book added with ID " << book.id << ".\n";
        } else if (choice == 2) {
            displayBooks(library);
        } else if (choice == 3) {
            string title;
            cout << "Enter title to search: ";
            getline(cin, title);
            int index = findBookByTitle(library, title);
            if (index >= 0) {
                const Book& book = library[index];
                cout << "Found: ID " << book.id << ", " << book.title << " by " << book.author;
                cout << " (" << (book.available ? "Available" : "Borrowed") << ")\n";
            } else {
                cout << "Book not found.\n";
            }
        } else if (choice == 4) {
            int id;
            cout << "Enter book ID to borrow: ";
            cin >> id;
            int index = findBookById(library, id);
            if (index >= 0) {
                if (library[index].available) {
                    library[index].available = false;
                    cout << "Book borrowed.\n";
                } else {
                    cout << "Book is already borrowed.\n";
                }
            } else {
                cout << "Book ID not found.\n";
            }
        } else if (choice == 5) {
            int id;
            cout << "Enter book ID to return: ";
            cin >> id;
            int index = findBookById(library, id);
            if (index >= 0) {
                if (!library[index].available) {
                    library[index].available = true;
                    cout << "Book returned.\n";
                } else {
                    cout << "Book is already available.\n";
                }
            } else {
                cout << "Book ID not found.\n";
            }
        } else if (choice == 6) {
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Invalid option.\n";
        }
        cout << '\n';
    }

    return 0;
}
