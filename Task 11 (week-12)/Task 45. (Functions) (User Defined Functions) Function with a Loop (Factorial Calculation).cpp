#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int num;

    cout << "Enter a number to calculate factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of negative numbers is not defined." << endl;
    } else {
        long long result = factorial(num);  
        cout << "Factorial of " << num << " is: " << result << endl;
    }

    return 0;
}

