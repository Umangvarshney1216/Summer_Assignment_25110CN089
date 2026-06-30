//program to create mini library system


#include <iostream>
#include <string>
using namespace std;
struct Book{
    int id;
    string name;
    string author;
    bool issued;
};
int main(){
    Book b[100];
    int n = 0, choice, id, i;
    string searchName;
    cout << "\n===== MINI LIBRARY SYSTEM =====";
    cout << "\n1. Add Book";
    cout << "\n2. Display Books";
    cout << "\n3. Search Book";
    cout << "\n4. Issue Book";
    cout << "\n5. Return Book";
    cout << "\n6. Exit";
    do
    {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice){
        case 1:
            cout << "\nEnter Book ID: ";
            cin >> b[n].id;
            cin.ignore();
            cout << "Enter Book Name: ";
            getline(cin, b[n].name);
            cout << "Enter Author Name: ";
            getline(cin, b[n].author);
            b[n].issued = false;
            n++;
            cout << "Book Added Successfully!\n";
            break;
        case 2:
            if (n == 0){
                cout << "\nNo books available.\n";
            }
            else{
                cout << "\n----- Book List -----\n";
                for (i = 0; i < n; i++){
                    cout << "\nBook ID : " << b[i].id;
                    cout << "\nBook Name : " << b[i].name;
                    cout << "\nAuthor : " << b[i].author;
                    cout << "\nStatus : " << (b[i].issued ? "Issued" : "Available");
                    cout << "\n-----------------------";
                }
            }
            break;
        case 3:
            if (n == 0){
                cout << "\nNo books available.\n";
                break;
            }
            cin.ignore();
            cout << "\nEnter Book Name to Search: ";
            getline(cin, searchName);
            for (i = 0; i < n; i++){
                if (b[i].name == searchName){
                    cout << "\nBook Found!";
                    cout << "\nBook ID : " << b[i].id;
                    cout << "\nAuthor : " << b[i].author;
                    cout << "\nStatus : " << (b[i].issued ? "Issued" : "Available");
                    break;
                }
            }
            if (i == n)
                cout << "\nBook Not Found!";
            break;
        case 4:
            cout << "\nEnter Book ID to Issue: ";
            cin >> id;
            for (i = 0; i < n; i++){
                if (b[i].id == id){
                    if (!b[i].issued){
                        b[i].issued = true;
                        cout << "Book Issued Successfully!";
                    }
                    else{
                        cout << "Book is already Issued!";
                    }
                    break;
                }
            }
            if (i == n)
                cout << "Book Not Found!";
            break;
        case 5:
            cout << "\nEnter Book ID to Return: ";
            cin >> id;
            for (i = 0; i < n; i++){
                if (b[i].id == id){
                    if (b[i].issued){
                        b[i].issued = false;
                        cout << "Book Returned Successfully!";
                    }
                    else{
                        cout << "Book was not Issued!";
                    }
                    break;
                }
            }
            if (i == n)
                cout << "Book Not Found!";
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