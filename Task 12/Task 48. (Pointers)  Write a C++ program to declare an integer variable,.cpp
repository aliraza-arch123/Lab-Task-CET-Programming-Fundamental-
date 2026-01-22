#include <iostream>
using namespace std;

int main() {
    int num = 50;      
    int *ptr;          

    ptr = &num;        

    cout << "Value of num using pointer: " << *ptr << endl;
    cout << "Address of num: " << ptr << endl;

    return 0;
}

