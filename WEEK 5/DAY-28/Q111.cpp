#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Seat {
    int number;
    bool booked;
    string customerName;
};

class TicketBookingSystem {
private:
    vector<Seat> seats;
    double ticketPrice;

public:
    TicketBookingSystem(int seatCount = 20, double price = 50.0) {
        ticketPrice = price;
        seats.reserve(seatCount);
        for (int i = 1; i <= seatCount; ++i) {
            seats.push_back({i, false, ""});
        }
    }

    void displayMenu() {
        cout << "\nTicket Booking System\n";
        cout << "1. Display available seats\n";
        cout << "2. Book a seat\n";
        cout << "3. Cancel booking\n";
        cout << "4. View booking summary\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
    }

    void displaySeats() {
        cout << "\nSeat status:\n";
        cout << left << setw(10) << "Seat" << setw(15) << "Status" << "Customer\n";
        for (const auto &seat : seats) {
            cout << left << setw(10) << seat.number;
            if (seat.booked) {
                cout << setw(15) << "Booked" << seat.customerName << '\n';
            } else {
                cout << setw(15) << "Available" << "-" << '\n';
            }
        }
    }

    void bookSeat() {
        int seatNumber;
        cout << "Enter seat number to book: ";
        cin >> seatNumber;
        if (seatNumber < 1 || seatNumber > (int)seats.size()) {
            cout << "Invalid seat number.\n";
            return;
        }
        Seat &seat = seats[seatNumber - 1];
        if (seat.booked) {
            cout << "Seat " << seatNumber << " is already booked by " << seat.customerName << ".\n";
            return;
        }
        cout << "Enter customer name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, seat.customerName);
        seat.booked = true;
        cout << "Seat " << seatNumber << " booked successfully for " << seat.customerName << ".\n";
    }

    void cancelBooking() {
        int seatNumber;
        cout << "Enter seat number to cancel: ";
        cin >> seatNumber;
        if (seatNumber < 1 || seatNumber > (int)seats.size()) {
            cout << "Invalid seat number.\n";
            return;
        }
        Seat &seat = seats[seatNumber - 1];
        if (!seat.booked) {
            cout << "Seat " << seatNumber << " is not booked.\n";
            return;
        }
        cout << "Booking for " << seat.customerName << " on seat " << seatNumber << " is canceled.\n";
        seat.booked = false;
        seat.customerName.clear();
    }

    void viewSummary() {
        int bookedCount = 0;
        for (const auto &seat : seats) {
            if (seat.booked) {
                bookedCount++;
            }
        }
        double revenue = bookedCount * ticketPrice;
        cout << "\nBooking Summary:\n";
        cout << "Total seats: " << seats.size() << '\n';
        cout << "Booked seats: " << bookedCount << '\n';
        cout << "Available seats: " << seats.size() - bookedCount << '\n';
        cout << "Estimated revenue: $" << fixed << setprecision(2) << revenue << "\n";
    }
};

int main() {
    TicketBookingSystem system;
    bool running = true;
    while (running) {
        system.displayMenu();
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                system.displaySeats();
                break;
            case 2:
                system.bookSeat();
                break;
            case 3:
                system.cancelBooking();
                break;
            case 4:
                system.viewSummary();
                break;
            case 5:
                running = false;
                cout << "Exiting ticket booking system.\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    }
    return 0;
}
