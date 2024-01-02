#include <iostream>
#include <string>

using namespace std;

const int MAX_PRODUCTS = 10;

class Product {
public:
    string name;
    float price;
    int quantityInStock;

    Product(string n, float p, int q) : name(n), price(p), quantityInStock(q) {}

    void displayDetails() const {
        cout << "Product: " << name << "\tPrice: $" << price << "\tQuantity in Stock: " << quantityInStock << endl;
    }
};

class ShoppingCart {
public:
    Product cart[MAX_PRODUCTS];
    int itemCount;

    ShoppingCart() : itemCount(0) {}

    void addProduct(const Product& product) {
        if (itemCount < MAX_PRODUCTS) {
            cart[itemCount++] = product;
            cout << "Product added to the cart!\n";
        } else {
            cout << "Cannot add more products. Cart is full.\n";
        }
    }

    float calculateTotalCost() const {
        float totalCost = 0;
        for (int i = 0; i < itemCount; ++i) {
            totalCost += cart[i].price;
        }
        return totalCost;
    }

    void displayCart() const {
        if (itemCount == 0) {
            cout << "Your shopping cart is empty.\n";
        } else {
            cout << "Shopping Cart Contents:\n";
            for (int i = 0; i < itemCount; ++i) {
                cart[i].displayDetails();
            }
            cout << "Total Cost: $" << calculateTotalCost() << endl;
        }
    }
};

int main() {
    Product laptop("Laptop", 800.0, 10);
    Product headphones("Headphones", 50.0, 20);

    ShoppingCart myCart;

    myCart.displayCart();  

    myCart.addProduct(laptop); 
    myCart.addProduct(headphones); 

    myCart.displayCart();  

    return 0;
}