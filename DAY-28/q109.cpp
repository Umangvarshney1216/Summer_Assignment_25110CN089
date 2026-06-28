//program to create library management system


#include <iostream>
#include <string>
using namespace std;
struct Book{
    int id;
    string name;
    string author;
    float price;
};
int main(){
    Book b[100];
    int n = 0;
    int choice;
    do{
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Update Book";
        cout << "\n5. Delete Book";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:{
                cout << "\nEnter Book ID: ";
                cin >> b[n].id;
                cin.ignore();
                cout << "Enter Book Name: ";
                getline(cin, b[n].name);
                cout << "Enter Author Name: ";
                getline(cin, b[n].author);
                cout << "Enter Book Price: ";
                cin >> b[n].price;
                n++;
                cout << "Book Added Successfully!\n";
                break;
            }
            case 2:{
                if(n == 0){
                    cout << "No Books Available.\n";
                }
                else{
                    cout << "\nBook Records:\n";
                    for(int i = 0; i < n; i++){
                        cout << "\nBook " << i + 1 << endl;
                        cout << "ID: " << b[i].id << endl;
                        cout << "Name: " << b[i].name << endl;
                        cout << "Author: " << b[i].author << endl;
                        cout << "Price: " << b[i].price << endl;
                    }
                }
                break;
            }
            case 3:{
                int id, found = 0;
                cout << "Enter Book ID to Search: ";
                cin >> id;
                for(int i = 0; i < n; i++){
                    if(b[i].id == id){
                        cout << "\nBook Found\n";
                        cout << "ID: " << b[i].id << endl;
                        cout << "Name: " << b[i].name << endl;
                        cout << "Author: " << b[i].author << endl;
                        cout << "Price: " << b[i].price << endl;
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Book Not Found.\n";
                break;
            }
            case 4:{
                int id, found = 0;
                cout << "Enter Book ID to Update: ";
                cin >> id;
                for(int i = 0; i < n; i++){
                    if(b[i].id == id){
                        cin.ignore();
                        cout << "Enter New Book Name: ";
                        getline(cin, b[i].name);
                        cout << "Enter New Author Name: ";
                        getline(cin, b[i].author);
                        cout << "Enter New Price: ";
                        cin >> b[i].price;
                        cout << "Book Updated Successfully!\n";
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Book Not Found.\n";
                break;
            }
            case 5:{
                int id, found = 0;
                cout << "Enter Book ID to Delete: ";
                cin >> id;
                for(int i = 0; i < n; i++){
                    if(b[i].id == id){
                        for(int j = i; j < n - 1; j++){
                            b[j] = b[j + 1];
                        }
                        n--;
                        found = 1;
                        cout << "Book Deleted Successfully!\n";
                        break;
                    }
                }
                if(found == 0)
                    cout << "Book Not Found.\n";
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