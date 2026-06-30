//program to ceate mini employee management system


#include <iostream>
#include <string>
using namespace std;
int main(){
    int empId[100], salary[100], n = 0;
    string empName[100], department[100];
    int choice, id, i;
    cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====";
    cout << "\n1. Add Employee";
    cout << "\n2. Display Employees";
    cout << "\n3. Search Employee";
    cout << "\n4. Update Employee";
    cout << "\n5. Exit";
    do
    {
        
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice){
        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> empId[n];
            cin.ignore();
            cout << "Enter Employee Name: ";
            getline(cin, empName[n]);
            cout << "Enter Department: ";
            getline(cin, department[n]);
            cout << "Enter Salary: ";
            cin >> salary[n];
            n++;
            cout << "\nEmployee Added Successfully!";
            break;
        case 2:
            if (n == 0){
                cout << "\nNo Employee Records Found!";
            }
            else{
                cout << "\n----- Employee Records -----";
                for (i = 0; i < n; i++){
                    cout << "\nEmployee ID : " << empId[i];
                    cout << "\nName        : " << empName[i];
                    cout << "\nDepartment  : " << department[i];
                    cout << "\nSalary      : " << salary[i];
                    cout << "\n----------------------------";
                }
            }
            break;
        case 3:
            cout << "\nEnter Employee ID to Search: ";
            cin >> id;
            for (i = 0; i < n; i++){
                if (empId[i] == id){
                    cout << "\nEmployee Found!";
                    cout << "\nEmployee ID : " << empId[i];
                    cout << "\nName        : " << empName[i];
                    cout << "\nDepartment  : " << department[i];
                    cout << "\nSalary      : " << salary[i];
                    break;
                }
            }
            if (i == n)
                cout << "\nEmployee Not Found!";
            break;
        case 4:
            cout << "\nEnter Employee ID to Update: ";
            cin >> id;
            for (i = 0; i < n; i++){
                if (empId[i] == id){
                    cin.ignore();
                    cout << "Enter New Employee Name: ";
                    getline(cin, empName[i]);
                    cout << "Enter New Department: ";
                    getline(cin, department[i]);
                    cout << "Enter New Salary: ";
                    cin >> salary[i];
                    cout << "\nEmployee Record Updated Successfully!";
                    break;
                }
            }
            if (i == n)
                cout << "\nEmployee Not Found!";
            break;
        case 5:
            cout << "\nThank You!";
            break;
        default:
            cout << "\nInvalid Choice!";
        }
    } while (choice != 5);
    return 0;
}