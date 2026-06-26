//program to create ATM simulation


#include <iostream>
using namespace std;
int main(){
    cout<<"MENU"<<endl;
    cout<<"1. Check balance"<<endl;
    cout<<"2. Deposit money"<<endl;
    cout<<"3. Withdraw money"<<endl;
    cout<<"4. Exit"<<endl;
    int balance= 14595;
    int choice;
    int amount= 0;
    do
    {
        cout<<"enter your option(1-4):";
        cin>>choice;    
        switch (choice){
        case 1:
            cout<<"the current balance is "<<balance<<" rs"<<endl;
            break;
        
        case 2:
            cout<<"enter the amount you want to deposit:";
            cin>>amount;
            balance+= amount;
            cout<<"you deposited "<<amount<<" rs"<<endl;
            break;
        
        case 3:
            cout<<"enter the amount you want to withdraw:";
            cin>>amount;
            if(amount<= balance){
                cout<<"You can withdraw"<<endl;;
                balance-= amount;
                cout<<"you withdrew "<<amount<<" rs"<<endl;
            }
            else{
                cout<<"You cannot withdraw"<<endl;
            }
            break;
        
        case 4:
            cout<<"you came out of menu"<<endl;
            break;
        
        default: 
            cout<<"make a valid option choice!"<<endl;
            break;
        }
    } while (choice != 4);
    return 0; 
}