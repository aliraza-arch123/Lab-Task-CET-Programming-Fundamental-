#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age;";
	cin>> age;
	string category=(age<13)?"child":(age<=19) ?"teenager":"Adult";
	cout<<"Age" << age <<"fall under the category :"<<category<<endl;
	return 0;
}
