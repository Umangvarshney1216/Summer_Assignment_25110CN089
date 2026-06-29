//program to create an inventory management system 


#include <iostream>
using namespace std;
struct Item{
    int id;
    string name;
    int quantity;
    float price;
};
int main(){
    Item item[100];
    int n = 0, choice, searchId;
    cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====";
    cout << "\n1. Add Item";
    cout << "\n2. Display All Items";
    cout << "\n3. Search Item";
    cout << "\n4. Update Item";
    cout << "\n5. Exit";
    do
    {  
        cout << "\nEnter Your Choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter Item ID: ";
                cin >> item[n].id;
                cout << "Enter Item Name: ";
                cin >> item[n].name;
                cout << "Enter Quantity: ";
                cin >> item[n].quantity;
                cout << "Enter Price: ";
                cin >> item[n].price;
                n++;
                cout << "Item Added Successfully!";
                break;
            case 2:
                if(n == 0){
                    cout << "No Items Available!";
                }
                else{
                    cout << "--- Item Details ---";
                    for(int i = 0; i < n; i++){
                        cout << "\nItem ID: " << item[i].id;
                        cout << "\nItem Name: " << item[i].name;
                        cout << "\nQuantity: " << item[i].quantity;
                        cout << "\nPrice: " << item[i].price;
                        cout << "\n-----------------------";
                    }
                }
                break;
            case 3:
                cout << "Enter Item ID to Search: ";
                cin >> searchId;
                for(int i = 0; i < n; i++){
                    if(item[i].id == searchId){
                        cout << "Item Found!";
                        cout << "\nName: " << item[i].name;
                        cout << "\nQuantity: " << item[i].quantity;
                        cout << "\nPrice: " << item[i].price;
                    }
                }
                break;
            case 4:
                cout << "Enter Item ID to Update: ";
                cin >> searchId;
                for(int i = 0; i < n; i++){
                    if(item[i].id == searchId){
                        cout << "Enter New Quantity: ";
                        cin >> item[i].quantity;
                        cout << "Enter New Price: ";
                        cin >> item[i].price;
                        cout << "Item Updated Successfully!";
                    }
                }
                break;
            case 5:
                cout << "Thank You!";
                break;
            default:
                cout << "Invalid Choice!";
        }
    } while(choice != 5);
    return 0;
}