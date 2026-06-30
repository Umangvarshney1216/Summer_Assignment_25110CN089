//program to develop mini project using arrays, strings, and functions

//I have selected hospital manangement system as my mini project 

#include <iostream>
#include <string>
using namespace std;
int patientId[100], age[100], n = 0;
string patientName[100], disease[100];
void addPatient(){
    cout << "\nEnter Patient ID: ";
    cin >> patientId[n];
    cin.ignore();
    cout << "Enter Patient Name: ";
    getline(cin, patientName[n]);
    cout << "Enter Age: ";
    cin >> age[n];
    cin.ignore();
    cout << "Enter Disease: ";
    getline(cin, disease[n]);
    n++;
    cout << "\nPatient Added Successfully!\n";
}
void displayPatients(){
    if (n == 0){
        cout << "\nNo Patient Records Found!\n";
        return;
    }
    cout << "\n===== Patient Records =====\n";
    for (int i = 0; i < n; i++){
        cout << "\nPatient ID   : " << patientId[i];
        cout << "\nName         : " << patientName[i];
        cout << "\nAge          : " << age[i];
        cout << "\nDisease      : " << disease[i];
        cout << "\n---------------------------";
    }
}
void searchPatient(){
    int id;
    cout << "\nEnter Patient ID to Search: ";
    cin >> id;
    for (int i = 0; i < n; i++){
        if (patientId[i] == id){
            cout << "\nPatient Found!";
            cout << "\nPatient ID : " << patientId[i];
            cout << "\nName       : " << patientName[i];
            cout << "\nAge        : " << age[i];
            cout << "\nDisease    : " << disease[i];
            return;
        }
    }
    cout << "\nPatient Not Found!";
}
void updatePatient(){
    int id;
    cout << "\nEnter Patient ID to Update: ";
    cin >> id;
    for (int i = 0; i < n; i++){
        if (patientId[i] == id){
            cin.ignore();
            cout << "Enter New Name: ";
            getline(cin, patientName[i]);
            cout << "Enter New Age: ";
            cin >> age[i];
            cin.ignore();
            cout << "Enter New Disease: ";
            getline(cin, disease[i]);
            cout << "\nPatient Record Updated Successfully!";
            return;
        }
    }
    cout << "\nPatient Not Found!";
}
int main(){
    int choice;
    cout << "\n===== HOSPITAL MANAGEMENT SYSTEM =====";
    cout << "\n1. Add Patient";
    cout << "\n2. Display Patients";
    cout << "\n3. Search Patient";
    cout << "\n4. Update Patient";
    cout << "\n5. Exit";
    do
    {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice){
        case 1:
            addPatient();
            break;
        case 2:
            displayPatients();
            break;
        case 3:
            searchPatient();
            break;
        case 4:
            updatePatient();
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