#include <iostream>
using namespace std;

class MovieTicket {
private:
    string movieName;
    int seatNumber;
    float price;
    bool isBooked;

public:
    // Constructor
    MovieTicket(string name, int seat, float p) {
        movieName = name;
        seatNumber = seat;
        price = p;
        isBooked = false;
    }

    // Book ticket
    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Ticket booked for " << movieName << " at seat " << seatNumber << endl;
        } else {
            cout << "Seat " << seatNumber << " is already booked!" << endl;
        }
    }

    // Cancel ticket
    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Booking cancelled for seat " << seatNumber << endl;
        } else {
            cout << "Seat " << seatNumber << " is not booked yet." << endl;
        }
    }

    // Display ticket details
    void displayTicketDetails() {
        cout << "Movie: " << movieName << ", Seat: " << seatNumber
             << ", Price: Rs." << price << ", Booked: " << (isBooked ? "Yes" : "No") << endl;
    }

    // Destructor
    ~MovieTicket() {
        cout << "Ticket for seat " << seatNumber << " deleted from system." << endl;
    }
};

int main() {
    MovieTicket t1("Avengers", 5, 250.0);
    MovieTicket t2("Avatar", 7, 300.0);

    t1.displayTicketDetails();
    t1.bookTicket();
    t1.displayTicketDetails();

    t2.bookTicket();
    t2.cancelTicket();
    t2.displayTicketDetails();

    return 0;
}
