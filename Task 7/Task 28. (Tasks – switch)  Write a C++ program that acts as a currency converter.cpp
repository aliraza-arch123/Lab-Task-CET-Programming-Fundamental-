#include <iostream>
using namespace std;

int main() {
    int choice;
    float usd, result;

    cout << "Currency Converter" << endl;
    cout << "1. USD to PKR" << endl;
    cout << "2. USD to INR" << endl;
    cout << "3. USD to EURO" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> usd;

    switch (choice) {
        case 1:
            result = usd * 280; 
            cout << "Amount in PKR = " << result;
            break;

        case 2:
            result = usd * 83; 
            cout << "Amount in INR = " << result;
            break;

        case 3:
            result = usd * 0.92; 
            cout << "Amount in EURO = " << result;
            break;

        default:
            cout << "Invalid choice! Please select 1, 2 or 3.";
    }

    return 0;
}

