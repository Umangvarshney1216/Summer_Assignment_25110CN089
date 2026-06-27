//program to create salary management system


#include <iostream>
using namespace std;
struct Employee{
    int empId;
    string name;
    float salary;
};
int main(){
    Employee e[100];
    int n = 0, choice, id, i;
    bool found;
    do{
        cout << "\n--- Salary Management System ---";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Salary";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Employee ID: ";
                cin >> e[n].empId;
                cout << "Enter Name: ";
                cin >> e[n].name;
                cout << "Enter Salary: ";
                cin >> e[n].salary;
                n++;
                break;
            case 2:
                for(i = 0; i < n; i++){
                    cout << "\nID: " << e[i].empId;
                    cout << "\nName: " << e[i].name;
                    cout << "\nSalary: " << e[i].salary << endl;
                }
                break;
            case 3:
                cout << "Enter Employee ID: ";
                cin >> id;
                found = false;
                for(i = 0; i < n; i++){
                    if(e[i].empId == id){
                        cout << "Name: " << e[i].name;
                        cout << "\nSalary: " << e[i].salary << endl;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Record Not Found!";
                break;
            case 4:
                cout << "Enter Employee ID: ";
                cin >> id;
                found = false;
                for(i = 0; i < n; i++){
                    if(e[i].empId == id){
                        cout << "Enter New Salary: ";
                        cin >> e[i].salary;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Record Not Found!";
                break;
            case 5:
                cout << "Enter Employee ID: ";
                cin >> id;
                found = false;
                for(i = 0; i < n; i++){
                    if(e[i].empId == id){
                        for(int j = i; j < n - 1; j++)
                            e[j] = e[j + 1];
                        n--;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Record Not Found!";
                break;
        }
    } while(choice != 6);
    return 0;
}