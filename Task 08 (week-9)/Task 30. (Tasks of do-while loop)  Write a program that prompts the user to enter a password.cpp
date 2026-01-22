#include <iostream>
using namespace std;

int main() {
    string password;
    string correctPassword = "secure123";

    do {
        cout << "Enter your password: ";
        cin >> password;

        if (password != correctPassword) {
            cout << "Incorrect password, please try again." << endl;
        }
    } while (password != correctPassword);

    cout << "Password accepted. Access granted!" << endl;

    return 0;
}

