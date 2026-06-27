//program to create employee management system


#include <iostream>
using namespace std;
struct Employee{
    int empId;
    string name;
    string department;
    float salary;
};
int main(){
    Employee e[100];
    int n = 0, choice, id, i;
    bool found;
    do{
        cout << "\n----- Employee Management System -----";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Employee ID: ";
                cin >> e[n].empId;
                cout << "Enter Employee Name: ";
                cin >> e[n].name;
                cout << "Enter Department: ";
                cin >> e[n].department;
                cout << "Enter Salary: ";
                cin >> e[n].salary;
                n++;
                cout << "Employee Added Successfully!";
                break;
            case 2:
                if(n == 0){
                    cout << "No Records Found!";
                }else{
                    for(i = 0; i < n; i++){
                        cout << "\nEmployee ID: " << e[i].empId;
                        cout << "\nName: " << e[i].name;
                        cout << "\nDepartment: " << e[i].department;
                        cout << "\nSalary: " << e[i].salary;
                        cout << "\n--------------------------";
                    }
                }
                break;
            case 3:
                cout << "Enter Employee ID to Search: ";
                cin >> id;
                found = false;
                for(i = 0; i < n; i++){
                    if(e[i].empId == id){
                        cout << "\nEmployee Found!";
                        cout << "\nEmployee ID: " << e[i].empId;
                        cout << "\nName: " << e[i].name;
                        cout << "\nDepartment: " << e[i].department;
                        cout << "\nSalary: " << e[i].salary;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Employee Not Found!";
                break;
            case 4:
                cout << "Enter Employee ID to Update: ";
                cin >> id;
                found = false;
                for(i = 0; i < n; i++){
                    if(e[i].empId == id){
                        cout << "Enter New Name: ";
                        cin >> e[i].name;
                        cout << "Enter New Department: ";
                        cin >> e[i].department;
                        cout << "Enter New Salary: ";
                        cin >> e[i].salary;
                        cout << "Employee Updated Successfully!";
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Employee Not Found!";
                break;
            case 5:
                cout << "Enter Employee ID to Delete: ";
                cin >> id;
                found = false;
                for(i = 0; i < n; i++){
                    if(e[i].empId == id){
                        for(int j = i; j < n - 1; j++){
                            e[j] = e[j + 1];
                        }
                        n--;
                        cout << "Employee Deleted Successfully!";
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Employee Not Found!";
                break;
            case 6:
                cout << "Exiting Program...";
                break;
            default:
                cout << "Invalid Choice!";
        }
    } while(choice != 6);
    return 0;
}