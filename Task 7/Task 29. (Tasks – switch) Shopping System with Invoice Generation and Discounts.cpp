#include <iostream>
using namespace std;

int main() {
    int category, item, quantity;
    float price = 0, total, discount = 0, finalPrice;

    cout << "Welcome to Shopping System\n";
    cout << "Select Category:\n1. Electronics\n2. Clothing\n3. Groceries\n";
    cout << "Enter your choice (1-3): ";
    cin >> category;

    switch(category) {
        case 1: 
            cout << "Select Item:\n1. Laptop ($1000)\n2. Smartphone ($700)\n3. Headphones ($150)\n";
            cin >> item;
            cout << "Enter quantity: ";
            cin >> quantity;

            switch(item) {
                case 1: price = 1000; break;
                case 2: price = 700; break;
                case 3: price = 150; break;
                default: cout << "Invalid item!"; return 0;
            }
            break;

        case 2:
            cout << "Select Item:\n1. Jacket ($120)\n2. T-shirt ($40)\n3. Jeans ($60)\n";
            cin >> item;
            cout << "Enter quantity: ";
            cin >> quantity;

            switch(item) {
                case 1: price = 120; break;
                case 2: price = 40; break;
                case 3: price = 60; break;
                default: cout << "Invalid item!"; return 0;
            }
            break;

        case 3: 
            cout << "Select Item:\n1. Milk ($2)\n2. Bread ($3)\n3. Eggs ($5)\n";
            cin >> item;
            cout << "Enter quantity: ";
            cin >> quantity;

            switch(item) {
                case 1: price = 2; break;
                case 2: price = 3; break;
                case 3: price = 5; break;
                default: cout << "Invalid item!"; return 0;
            }
            break;

        default:
            cout << "Invalid category!";
            return 0;
    }

    total = price * quantity;

    if (total >= 100 && total <= 500)
        discount = total * 0.10;
    else if (total > 500)
        discount = total * 0.20;

    finalPrice = total - discount;

    cout << "\n--- Invoice ---\n";
    cout << "Category: " << category << "\n";
    cout << "Item Price: $" << price << "\n";
    cout << "Quantity: " << quantity << "\n";
    cout << "Total Price: $" << total << "\n";
    cout << "Discount: $" << discount << "\n";
    cout << "Final Price: $" << finalPrice << "\n";
    cout << "----------------\n";

    return 0;
}

