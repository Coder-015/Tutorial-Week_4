#include <iostream>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    float price;

public:
    // Default constructor
    Book() {
        bookID = 0;
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
    }

    // Parameterized constructor
    Book(int id, string t, string a, float p) {
        bookID = id;
        title = t;
        author = a;
        price = p;
    }

    // Display function
    void displayBookInfo() {
        cout << "Book ID: " << bookID << ", Title: " << title
             << ", Author: " << author << ", Price: Rs." << price << endl;
    }
};

int main() {
    Book b1; // using default constructor
    Book b2(101, "1984", "George Orwell", 399.0);
    Book b3(102, "C++ Primer", "Lippman", 699.5);

    b1.displayBookInfo();
    b2.displayBookInfo();
    b3.displayBookInfo();

    return 0;
}
