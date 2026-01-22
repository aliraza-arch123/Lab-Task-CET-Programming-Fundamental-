#include <iostream>
using namespace std;


char calculateGrade(int marks) {
    float percentage = marks; 
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int marks1, marks2, marks3;
    int total;
    float percentage;
    char grade1, grade2, grade3;

    cout << "Enter marks of subject 1 (out of 100): ";
    cin >> marks1;
    cout << "Enter marks of subject 2 (out of 100): ";
    cin >> marks2;
    cout << "Enter marks of subject 3 (out of 100): ";
    cin >> marks3;

    grade1 = calculateGrade(marks1);
    grade2 = calculateGrade(marks2);
    grade3 = calculateGrade(marks3);

    if (grade1 == 'F' || grade2 == 'F' || grade3 == 'F') {
        cout << "\nStudent has Failed!" << endl;
        return 0; 
    }

    total = marks1 + marks2 + marks3;
    percentage = total / 3.0;

    cout << "\n--- Result ---" << endl;
    cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
    cout << "Grades: " << grade1 << ", " << grade2 << ", " << grade3 << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (grade1 == 'A' && grade2 == 'A' && grade3 == 'A' && total >= 270) {
        cout << "Eligible for Merit Scholarship" << endl;
    } else if ((grade1 >= 'B' && grade2 >= 'B' && grade3 >= 'B') && total >= 240) {
        cout << "Eligible for Regular Scholarship" << endl;
    } else {
        cout << "Not eligible for scholarship" << endl;
    }

    return 0;
}

