#include<iostream>
using namespace std;
int main(){
	int num;
	int x = 1;
	cout<<"Enter a number:";
    cin >> num;

    if(num < 0) {
     cout << "Factorial of negative numbers is not defined.";
    } else {
       for(int i = 1; i <= num; i++) {
         x *= i;
        }
        cout << "Factorial = " << x;
    }
    return 0;
}
