#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:
    // Default constructor
    Product() {
        productID = 0;
        productName = "Unknown";
        price = 0;
        quantity = 0;
    }

    // Parameterized constructor
    Product(int id, string name, float p, int q) {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    // Calculate total price
    float calculateTotalPrice() {
        return price * quantity;
    }

    // Display product
    void display() {
        cout << "ID: " << productID << ", Name: " << productName
             << ", Price: Rs." << price << ", Quantity: " << quantity
             << ", Total: Rs." << calculateTotalPrice() << endl;
    }

    // Destructor
    ~Product() {
        cout << "Product \"" << productName << "\" removed from cart." << endl;
    }
};

int main() {
    Product cart[2] = {
        Product(1, "Laptop", 55000, 1),
        Product(2, "Mouse", 500, 2)
    };

    for (int i = 0; i < 2; i++) {
        cart[i].display();
    }

    return 0;
}
