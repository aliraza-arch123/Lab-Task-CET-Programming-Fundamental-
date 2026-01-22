#include <iostream>
using namespace std;

int main() {
    int num = 10;      
    int *ptr;          

    ptr = &num;        

    cout << "Original value of num: " << num << endl;

    *ptr = 25;

    cout << "Modified value of num using pointer: " << num << endl;

    return 0;
}

