#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter your marks out of 100 :";
	cin>>marks;
	if(marks>=90) {
	cout<<"your grade is A+"<<endl;
}

	if(marks>=80&&marks<=89) {
	
		cout<<"your grade is A"<<endl;
      }
	if(marks>=70&&marks<=79) {
		cout<<"your grade is B"<<endl;
      }
	if(marks>=60&&marks<=69) {
	
		cout<<"your grade is C"<<endl;
      }
	if(marks<60) {
	
		cout<<"your grade is false"<<endl;
      }
      system("pause");
	return 0;
}
