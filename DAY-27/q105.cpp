//program to create student management system


#include <iostream>
using namespace std;
struct Student{
    int roll;
    string name;
    float marks;};
int main(){
    Student s[100];
    int n = 0;
    int choice, roll, i;
    bool found;
    do{
        cout << "\n----- Student Record Management System -----";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> s[n].roll;
                cout << "Enter Name: ";
                cin >> s[n].name;
                cout << "Enter Marks: ";
                cin >> s[n].marks;
                n++;
                cout << "Student Record Added Successfully!";
                break;
            case 2:
                if(n == 0){
                    cout << "No Records Found!";
                }
                else{
                    cout << "\nStudent Records:\n";
                    for(i = 0; i < n; i++){
                        cout << "Roll No: " << s[i].roll << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                        cout << "------------------------" << endl;
                    }
                }
                break;
            case 3:
                cout << "Enter Roll Number to Search: ";
                cin >> roll;
                found = false;
                for(i = 0; i < n; i++){
                    if(s[i].roll == roll){
                        cout << "Record Found!" << endl;
                        cout << "Roll No: " << s[i].roll << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Record Not Found!";
                break;
            case 4:
                cout << "Enter Roll Number to Update: ";
                cin >> roll;
                found = false;
                for(i = 0; i < n; i++){
                    if(s[i].roll == roll){
                        cout << "Enter New Name: ";
                        cin >> s[i].name;
                        cout << "Enter New Marks: ";
                        cin >> s[i].marks;
                        cout << "Record Updated Successfully!";
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Record Not Found!";
                break;
            case 5:
                cout << "Enter Roll Number to Delete: ";
                cin >> roll;
                found = false;
                for(i = 0; i < n; i++){
                    if(s[i].roll == roll){
                        for(int j = i; j < n - 1; j++){
                            s[j] = s[j + 1];
                        }
                        n--;
                        cout << "Record Deleted Successfully!";
                        found = true;
                        break;
                    }
                }
                if(!found)
                    cout << "Record Not Found!";
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