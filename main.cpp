#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    long int studentId;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "Hello " << name << "." << endl;
    cout << "What is your Student ID?" << endl;
    cin >> studentId;
    cout << "Your ID is " << studentId << "." << endl;
    int var1, var2, sum, diff, prod;
    cout << "Enter the value of var1: ";
    cin >> var1;
    cout << "Enter the value of var2: ";
    cin >> var2;
    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "sum = " << sum << endl;
    cout << "diff = " << diff << endl;
    cout << "prod = " << prod << endl;
    string name1;
    double labGrade, midtermGrade, finalGrade, lastScore;
    cout << "Enter the name of the student: ";
    cin >> name1;
    cout << "Enter the lab grade (%25): ";
    cin >> labGrade;
    cout << "Enter the midterm grade (%35): ";
    cin >> midtermGrade;
    cout << "Enter the final grade (%40): ";
    cin >> finalGrade;
    lastScore = labGrade * 0.25 + midtermGrade * 0.35 + finalGrade * 0.4;
    cout << "Name: " << name1 << endl;
    cout << "Lab: " << labGrade << endl;
    cout << "Midterm: " << midtermGrade << endl;
    cout << "Final: " << finalGrade << endl;
    cout << "Last Score: " << lastScore << endl;
    cout << "*\n**\n***\n**\n*\n";
    return 0;
}
