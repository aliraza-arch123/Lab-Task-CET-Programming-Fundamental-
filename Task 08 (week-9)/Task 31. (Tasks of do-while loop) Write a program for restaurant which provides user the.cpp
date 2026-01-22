#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice;
    int quantity;
    double price = 0, totalBill = 0;
    char moreOrder;

    do {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Breakfast\n";
        cout << "2. Lunch\n";
        cout << "3. Dinner\n";
        cout << "Enter your choice (1-3): ";
        cin >> mainChoice;

        if (mainChoice == 1) {
            cout << "\n--- Breakfast Menu ---\n";
            cout << "1. Anda Paratha (RS.40)\n";
            cout << "2. Nan Channy (RS.60)\n";
            cout << "3. Siri Paye (RS.150)\n";
            cout << "4. Tea (RS.15)\n";
            cout << "Enter your choice (1-4): ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            switch(subChoice) {
                case 1: price = 40 * quantity; break;
                case 2: price = 60 * quantity; break;
                case 3: price = 150 * quantity; break;
                case 4: price = 15 * quantity; break;
                default: price = 0; cout << "Invalid selection!\n"; break;
            }

        } else if (mainChoice == 2) {
            cout << "\n--- Lunch Menu ---\n";
            cout << "1. Chicken Karahi (RS.1050/KG)\n";
            cout << "2. Mutton Karahi (RS.1800/KG)\n";
            cout << "3. Egg Fried Rice (RS.450/palte)\n";
            cout << "4. BBQ (RS.1050/dozen)\n";
            cout << "Enter your choice (1-4): ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            switch(subChoice) {
                case 1: price = 1050 * quantity; break;
                case 2: price = 1800 * quantity; break;
                case 3: price = 450 * quantity; break;
                case 4: price = 1050 * quantity; break;
                default: price = 0; cout << "Invalid selection!\n"; break;
            }

        } else if (mainChoice == 3) {
            cout << "\n--- Dinner Menu ---\n";
            cout << "1. Chicken Karahi (RS.1050/KG)\n";
            cout << "2. Mutton Karahi (RS.1800/KG)\n";
            cout << "3. Egg Fried Rice (RS.450/palte)\n";
            cout << "4. BBQ (RS.1050/dozen)\n";
            cout << "5. Saji (RS.800/KG)\n";
            cout << "Enter your choice (1-5): ";
            cin >> subChoice;

            cout << "Enter quantity: ";
            cin >> quantity;

            switch(subChoice) {
                case 1: price = 1050 * quantity; break;
                case 2: price = 1800 * quantity; break;
                case 3: price = 450 * quantity; break;
                case 4: price = 1050 * quantity; break;
                case 5: price = 800 * quantity; break;
                default: price = 0; cout << "Invalid selection!\n"; break;
            }

        } else {
            price = 0;
            cout << "Invalid main menu selection!\n";
        }

        totalBill += price;

        cout << "\nDo you want to order more items? (Y/N): ";
        cin >> moreOrder;

    } while(moreOrder == 'Y' || moreOrder == 'y');

    cout << "\n--- Invoice ---\n";
    cout << "Total amount to pay: RS." << totalBill << endl;

    return 0;
}

