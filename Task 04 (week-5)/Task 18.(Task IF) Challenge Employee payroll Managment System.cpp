/*#include<iostream>
using namespace std;
int main(){
	char grade;
	int year;
	double basic ,salary, bonus,gross,tax=0,net;
	cout<<"Enter employee grade(A,B,C) :";
	cin>>grade;
	cout<<"enter year of service :";
	cin>>year;
	
	if(grade=='A')
	salary =50000;
	if(grade=='B')
	salary=30000;
	if(grade=='C')
	salary=20000;
	
	if(year>=10)
	bonus=0.10*salary;
	if(year>=5&&year<=9)
	bonus=0.05*salary;
	if(year<5)
	bonus=0;
	
	gross=salary+bonus;
	
	if(gross>40000)
	tax=0.20*gross;
	if(gross>=30000&&gross<=40000)
	tax=0.10*gross;
	if(gross<30000)
	tax=0;

	net=gross-tax;
	cout<<"basic salary:"<<salary<<endl;
	cout<<"bonus:"<<bonus<<endl;
	cout<<"gross salary:"<<gross<<endl;
	cout<<"net salary :"<<net<<endl;
	system("pause");
	return 0;
	
	
	
} */

#include <iostream>
using namespace std;

int main() {
    char grade;
    int years;
    double basicSalary = 0;
    double bonus = 0;
    double grossSalary = 0;
    double tax = 0;
    double netSalary = 0;

    // Input
    cout << "Enter employee grade (A, B, C): ";
    cin >> grade;

    cout << "Enter years of service: ";
    cin >> years;

    // Basic salary based on grade
    if (grade == 'A' || grade == 'a')
        basicSalary = 50000;

    if (grade == 'B' || grade == 'b')
        basicSalary = 30000;

    if (grade == 'C' || grade == 'c')
        basicSalary = 20000;

    // Bonus calculation
    if (years >= 10)
        bonus = basicSalary * 0.10;

    if (years >= 5 && years <= 9)
        bonus = basicSalary * 0.05;

    if (years < 5)
        bonus = 0;

    // Gross salary
    grossSalary = basicSalary + bonus;

    // Tax deduction
    if (grossSalary > 40000)
        tax = grossSalary * 0.20;

    if (grossSalary >= 30000 && grossSalary <= 40000)
        tax = grossSalary * 0.10;

    if (grossSalary < 30000)
        tax = 0;

    // Net salary
    netSalary = grossSalary - tax;

    // Output
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Tax Deducted: " << tax << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
