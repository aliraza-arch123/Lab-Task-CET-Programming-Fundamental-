#include <iostream>
using namespace std;

void displayMenu() {
    cout << "\n===== Restaurant Menu =====\n";
    cout << "1. Burger (Rs.150)\n";
    cout << "2. Pizza (Rs.500)\n";
    cout << "3. Sandwich (Rs.120)\n";
    cout << "4. Pasta (Rs.300)\n";
    cout << "5. Coke (Rs.50)\n";
    cout << "6. Exit\n";
}

double calculateItemCost(double price, int quantity) {
    return price * quantity;
}

double calculateFinalBill(double total) {
    double tax = 0.10 * total; 
    return total + tax;
}

int main() {
    int choice, quantity;
    double totalBill = 0;

    do {
        displayMenu();

        cout << "Enter your choice (1-6): ";
        cin >> choice;

        double price = 0;

        switch (choice) {
            case 1: price = 150; break;
            case 2: price = 500; break;
            case 3: price = 120; break;
            case 4: price = 300; break;
            case 5: price = 50;  break;
            case 6: 
                cout << "Exiting menu..." << endl; 
                continue;
            default:
                cout << "Invalid choice! Try again." << endl;
                continue;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        totalBill += calculateItemCost(price, quantity);

    } while (choice != 6);

    if (totalBill > 0) {
        double finalAmount = calculateFinalBill(totalBill);
        cout << "\n============================\n";
        cout << "Total Bill (before tax): Rs. " << totalBill << endl;
        cout << "Total Bill (with 10% service charge): Rs. " << finalAmount << endl;
        cout << "============================\n";
        cout << "Thank you for visiting our restaurant!" << endl;
    } else {
        cout << "No items ordered. Goodbye!" << endl;
    }

    return 0;
}

