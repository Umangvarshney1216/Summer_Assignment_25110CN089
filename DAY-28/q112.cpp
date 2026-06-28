//program to create contact managemnt system


#include <iostream>
#include <string>
using namespace std;
struct Contact{
    int id;
    string name;
    string phone;
    string email;
};
int main(){
    Contact c[100];
    int n = 0;
    int choice;
    do{
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Update Contact";
        cout << "\n5. Delete Contact";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:{
                cout << "Enter Contact ID: ";
                cin >> c[n].id;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, c[n].name);
                cout << "Enter Phone Number: ";
                getline(cin, c[n].phone);
                cout << "Enter Email: ";
                getline(cin, c[n].email);
                n++;
                cout << "Contact Added Successfully!\n";
                break;
            }
            case 2:{
                if(n == 0){
                    cout << "No Contacts Available.\n";
                }
                else{
                    for(int i = 0; i < n; i++){
                        cout << "\nContact " << i + 1 << endl;
                        cout << "ID    : " << c[i].id << endl;
                        cout << "Name  : " << c[i].name << endl;
                        cout << "Phone : " << c[i].phone << endl;
                        cout << "Email : " << c[i].email << endl;
                    }
                }
                break;
            }
            case 3:{
                int id, found = 0;
                cout << "Enter Contact ID to Search: ";
                cin >> id;
                for(int i = 0; i < n; i++){
                    if(c[i].id == id){
                        cout << "\nContact Found\n";
                        cout << "ID    : " << c[i].id << endl;
                        cout << "Name  : " << c[i].name << endl;
                        cout << "Phone : " << c[i].phone << endl;
                        cout << "Email : " << c[i].email << endl;
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Contact Not Found.\n";
                break;
            }
            case 4:{
                int id, found = 0;
                cout << "Enter Contact ID to Update: ";
                cin >> id;
                for(int i = 0; i < n; i++){
                    if(c[i].id == id){
                        cin.ignore();
                        cout << "Enter New Name: ";
                        getline(cin, c[i].name);
                        cout << "Enter New Phone Number: ";
                        getline(cin, c[i].phone);
                        cout << "Enter New Email: ";
                        getline(cin, c[i].email);
                        cout << "Contact Updated Successfully!\n";
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Contact Not Found.\n";
                break;
            }
            case 5:{
                int id, found = 0;
                cout << "Enter Contact ID to Delete: ";
                cin >> id;
                for(int i = 0; i < n; i++){
                    if(c[i].id == id){
                        for(int j = i; j < n - 1; j++){
                            c[j] = c[j + 1];
                        }
                        n--;
                        cout << "Contact Deleted Successfully!\n";
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Contact Not Found.\n";
                break;
            }
            case 6:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while(choice != 6);
    return 0;
}