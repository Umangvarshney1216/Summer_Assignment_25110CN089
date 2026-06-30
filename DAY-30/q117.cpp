//program to create student record system using arrays and strings


#include <iostream>
#include <string>
using namespace std;
int main(){
    int roll[100], marks[100], n = 0;
    string name[100];
    int choice, r, i;
    string sname;
    cout << "\n===== STUDENT RECORD SYSTEM =====";
    cout << "\n1. Add Student";
    cout << "\n2. Display Students";
    cout << "\n3. Search by Roll Number";
    cout << "\n4. Search by Name";
    cout << "\n5. Update Student";
    cout << "\n6. Exit";
    do
    {
     
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice){
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> roll[n];
            cin.ignore();
            cout << "Enter Student Name: ";
            getline(cin, name[n]);
            cout << "Enter Marks: ";
            cin >> marks[n];
            n++;
            cout << "Student Record Added Successfully!";
            break;
        case 2:
            if (n == 0){
                cout << "\nNo Records Found!";
            }else{
                cout << "\n----- Student Records -----";
                for (i = 0; i < n; i++){
                    cout << "\nRoll Number : " << roll[i];
                    cout << "\nName        : " << name[i];
                    cout << "\nMarks       : " << marks[i];
                    cout << "\n--------------------------";
                }
            }
            break;
        case 3:
            cout << "\nEnter Roll Number to Search: ";
            cin >> r;
            for (i = 0; i < n; i++){
                if (roll[i] == r){
                    cout << "\nRecord Found!";
                    cout << "\nRoll Number : " << roll[i];
                    cout << "\nName        : " << name[i];
                    cout << "\nMarks       : " << marks[i];
                    break;
                }
            }
            if (i == n)
                cout << "\nRecord Not Found!";
            break;
        case 4:
            cin.ignore();
            cout << "\nEnter Student Name to Search: ";
            getline(cin, sname);
            for (i = 0; i < n; i++){
                if (name[i] == sname){
                    cout << "\nRecord Found!";
                    cout << "\nRoll Number : " << roll[i];
                    cout << "\nName        : " << name[i];
                    cout << "\nMarks       : " << marks[i];
                    break;
                }
            }
            if (i == n)
                cout << "\nRecord Not Found!";
            break;
        case 5:
            cout << "\nEnter Roll Number to Update: ";
            cin >> r;
            for (i = 0; i < n; i++){
                if (roll[i] == r){
                    cin.ignore();
                    cout << "Enter New Name: ";
                    getline(cin, name[i]);
                    cout << "Enter New Marks: ";
                    cin >> marks[i];
                    cout << "Record Updated Successfully!";
                    break;
                }
            }
            if (i == n)
                cout << "\nRecord Not Found!";
            break;
        case 6:
            cout << "\nThank You!";
            break;
        default:
            cout << "\nInvalid Choice!";
        }
    } while (choice != 6);
    return 0;
}