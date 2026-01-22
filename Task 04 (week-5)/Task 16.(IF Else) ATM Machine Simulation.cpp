/*#include<iostream>
using namespace std;
int main(){
	int balance;
	int withdraw;
	cout<<"Enter your  balance:";
	cin>>balance;
	cout<<"Enter your withdraw";
		cin>>withdraw;
	if(withdraw <=balance){
		balance-=withdraw;
		cout<<"remain balance :$" <<balance<<endl;
	} else{
		cout<<"insufficient balnace:"<<endl;
		system("pause");
		return 0;
		
	}
} */

#include <iostream>
using namespace std;

int main() {
    int balance, withdraw;

    // Ask for account balance
    cout << "Enter your account balance: ";
    cin >> balance;

    // Ask for withdrawal amount
    cout << "Enter withdrawal amount: ";
    cin >> withdraw;

    // Check if withdrawal is possible
    if (withdraw <= balance) {
        balance = balance - withdraw;
        cout << "Withdrawal successful!" << endl;
        cout << "Remaining balance: " << balance << endl;
    }
    else {
        cout << "Insufficient balance." << endl;
    }

    return 0;
}



