//program to create marksheet generation system


#include <iostream>
using namespace std;
struct Student{
    int roll;
    string name;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;
};
int main(){
    Student s;
    cout << "Enter Roll Number: ";
    cin >> s.roll;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Marks of 5 Subjects:\n";
    cin >> s.m1 >> s.m2 >> s.m3 >> s.m4 >> s.m5;
    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
    s.percentage = s.total / 5.0;
    if(s.percentage >= 90)
        s.grade = 'A';
    else if(s.percentage >= 75)
        s.grade = 'B';
    else if(s.percentage >= 60)
        s.grade = 'C';
    else if(s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';
    cout << "\n----- MARKSHEET -----\n";
    cout << "Roll Number : " << s.roll << endl;
    cout << "Name        : " << s.name << endl;
    cout << "Total Marks : " << s.total << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;
    cout << "Grade       : " << s.grade << endl;
    return 0;
}