#include <iostream>
using namespace std;

int main() {
    int choice;
    float area, radius, length, width, base, height;

    cout << "Select a shape to calculate area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius of circle: ";
            cin >> radius;
            area = 3.14 * radius * radius;
            cout << "Area of Circle = " << area;
            break;

        case 2:
            cout << "Enter length of rectangle: ";
            cin >> length;
            cout << "Enter width of rectangle: ";
            cin >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area;
            break;

        case 3:
            cout << "Enter base of triangle: ";
            cin >> base;
            cout << "Enter height of triangle: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle = " << area;
            break;

        default:
            cout << "Invalid choice! Please select 1, 2 or 3.";
    }

    return 0;
}

