#include <iostream>
using namespace std;

int main() {
    int num = 100;        
    void *ptr;            

    ptr = &num;           

    cout << "Value of num using void pointer: " << *(static_cast<int*>(ptr)) << endl;

    return 0;
}

