//program to create bank account system


#include <iostream>
#include <string>
using namespace std;
struct BankAccount{
    int accNo;
    string name;
    float balance;
};
int main(){
    BankAccount acc[100];
    int n = 0;
    int choice;
    do{
        cout << "\n===== BANK ACCOUNT SYSTEM =====";
        cout << "\n1. Create Account";
        cout << "\n2. Display Accounts";
        cout << "\n3. Search Account";
        cout << "\n4. Deposit Money";
        cout << "\n5. Withdraw Money";
        cout << "\n6. Delete Account";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:{
                cout << "Enter Account Number: ";
                cin >> acc[n].accNo;
                cin.ignore();
                cout << "Enter Account Holder Name: ";
                getline(cin, acc[n].name);
                cout << "Enter Initial Balance: ";
                cin >> acc[n].balance;
                n++;
                cout << "Account Created Successfully!\n";
                break;
            }
            case 2:{
                if(n == 0){
                    cout << "No Accounts Found.\n";
                }
                else{
                    for(int i = 0; i < n; i++){
                        cout << "\nAccount " << i + 1 << endl;
                        cout << "Account Number: " << acc[i].accNo << endl;
                        cout << "Name: " << acc[i].name << endl;
                        cout << "Balance: " << acc[i].balance << endl;
                    }
                }
                break;
            }
            case 3:{
                int num, found = 0;
                cout << "Enter Account Number: ";
                cin >> num;
                for(int i = 0; i < n; i++){
                    if(acc[i].accNo == num){
                        cout << "Account Found\n";
                        cout << "Account Number: " << acc[i].accNo << endl;
                        cout << "Name: " << acc[i].name << endl;
                        cout << "Balance: " << acc[i].balance << endl;
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Account Not Found.\n";
                break;
            }
            case 4:{
                int num, found = 0;
                float amount;
                cout << "Enter Account Number: ";
                cin >> num;
                for(int i = 0; i < n; i++){
                    if(acc[i].accNo == num){
                        cout << "Enter Amount to Deposit: ";
                        cin >> amount;
                        acc[i].balance += amount;
                        cout << "Deposit Successful.\n";
                        cout << "Updated Balance: " << acc[i].balance << endl;
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Account Not Found.\n";
                break;
            }
            case 5:{
                int num, found = 0;
                float amount;
                cout << "Enter Account Number: ";
                cin >> num;
                for(int i = 0; i < n; i++){
                    if(acc[i].accNo == num){
                        cout << "Enter Amount to Withdraw: ";
                        cin >> amount;
                        if(amount <= acc[i].balance){
                            acc[i].balance -= amount;
                            cout << "Withdrawal Successful.\n";
                            cout << "Remaining Balance: " << acc[i].balance << endl;
                        }
                        else{
                            cout << "Insufficient Balance.\n";
                        }
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Account Not Found.\n";
                break;
            }
            case 6:{
                int num, found = 0;
                cout << "Enter Account Number to Delete: ";
                cin >> num;
                for(int i = 0; i < n; i++){
                    if(acc[i].accNo == num){
                        for(int j = i; j < n - 1; j++){
                            acc[j] = acc[j + 1];
                        }
                        n--;
                        cout << "Account Deleted Successfully.\n";
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Account Not Found.\n";
                break;
            }
            case 7:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while(choice != 7);
    return 0;
}