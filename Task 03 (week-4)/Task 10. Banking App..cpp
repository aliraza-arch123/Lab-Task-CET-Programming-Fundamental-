#include<iostream>
using namespace std;
int main () {
	double balance;
	bool isloyal;
	cout << "enter account balance: $";
	cin >> balance;
	cout << "enter loyality status(1 for loyal,0 for not loyal):";
	cin >> isloyal;
	string accounttype = (balance < 100) ?"low balance" :   (balance <= 500) ?"standard account" : "Premium account";
	string offerEligibility     = (balance > 200 && isloyal) ? "Eligible" : "not Eligible";
	cout << ("account type: ") << accounttype << endl;  
    cout << ("special offer: ") << offerEligibility << endl;
	return 0;
}
