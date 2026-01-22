#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;

    if (temp >= 40) {
        cout << "Stay indoors! It is extremely hot.";
    }
    else if (temp >= 30 && temp <= 39) {
        cout << "Drink plenty of water. Weather is very hot.";
    }
    else if (temp >= 20 && temp <= 29) {
        cout << "Weather is pleasant and suitable for outdoor activities.";
    }
    else if (temp < 20) {
        cout << "Wear warm clothes. It is cold.";
    }

    return 0;
}