#include <iostream>
using namespace std;

int main() {
    
    double item1 = 12.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 14.95;
    double item5 = 3.95;

    const double TAX_RATE = 0.06; 

    cout << "Price of item 1: $" << item1 << endl;
    cout << "Price of item 2: $" << item2 << endl;
    cout << "Price of item 3: $" << item3 << endl;
    cout << "Price of item 4: $" << item4 << endl;
    cout << "Price of item 5: $" << item5 << endl;

    double subtotal = item1 + item2 + item3 + item4 + item5;
    cout << "Subtotal: $" << subtotal << endl;

    double tax = subtotal * TAX_RATE;
    cout << "Sales Tax (6%): $" << tax << endl;

    double total = subtotal + tax;
    cout << "Total: $" << total << endl;
    system("pause");
    return 0;
}
