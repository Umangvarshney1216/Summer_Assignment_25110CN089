//program to create ticket booking system


#include <iostream>
#include <string>
using namespace std;
struct Ticket{
    int ticketNo;
    string passengerName;
    string destination;
    int seatNo;
    float price;
};
int main(){
    Ticket t[100];
    int n = 0;
    int choice;
    do{
        cout << "\n===== TICKET BOOKING SYSTEM =====";
        cout << "\n1. Book Ticket";
        cout << "\n2. Display All Tickets";
        cout << "\n3. Search Ticket";
        cout << "\n4. Update Ticket";
        cout << "\n5. Cancel Ticket";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:{
                cout << "Enter Ticket Number: ";
                cin >> t[n].ticketNo;
                cin.ignore();
                cout << "Enter Passenger Name: ";
                getline(cin, t[n].passengerName);
                cout << "Enter Destination: ";
                getline(cin, t[n].destination);
                cout << "Enter Seat Number: ";
                cin >> t[n].seatNo;
                cout << "Enter Ticket Price: ";
                cin >> t[n].price;
                n++;
                cout << "Ticket Booked Successfully!\n";
                break;
            }
            case 2:{
                if(n == 0){
                    cout << "No Tickets Booked.\n";
                }
                else{
                    for(int i = 0; i < n; i++){
                        cout << "\nTicket " << i + 1 << endl;
                        cout << "Ticket Number : " << t[i].ticketNo << endl;
                        cout << "Passenger Name: " << t[i].passengerName << endl;
                        cout << "Destination   : " << t[i].destination << endl;
                        cout << "Seat Number   : " << t[i].seatNo << endl;
                        cout << "Ticket Price  : " << t[i].price << endl;
                    }
                }
                break;
            }
            case 3:{
                int num, found = 0;
                cout << "Enter Ticket Number to Search: ";
                cin >> num;
                for(int i = 0; i < n; i++){
                    if(t[i].ticketNo == num){
                        cout << "\nTicket Found\n";
                        cout << "Ticket Number : " << t[i].ticketNo << endl;
                        cout << "Passenger Name: " << t[i].passengerName << endl;
                        cout << "Destination   : " << t[i].destination << endl;
                        cout << "Seat Number   : " << t[i].seatNo << endl;
                        cout << "Ticket Price  : " << t[i].price << endl;
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Ticket Not Found.\n";
                break;
            }
            case 4:{
                int num, found = 0;
                cout << "Enter Ticket Number to Update: ";
                cin >> num;
                for(int i = 0; i < n; i++){
                    if(t[i].ticketNo == num){
                        cin.ignore();
                        cout << "Enter New Passenger Name: ";
                        getline(cin, t[i].passengerName);
                        cout << "Enter New Destination: ";
                        getline(cin, t[i].destination);
                        cout << "Enter New Seat Number: ";
                        cin >> t[i].seatNo;
                        cout << "Enter New Ticket Price: ";
                        cin >> t[i].price;
                        cout << "Ticket Updated Successfully!\n";
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Ticket Not Found.\n";
                break;
            }
            case 5:{
                int num, found = 0;
                cout << "Enter Ticket Number to Cancel: ";
                cin >> num;
                for(int i = 0; i < n; i++){
                    if(t[i].ticketNo == num){
                        for(int j = i; j < n - 1; j++){
                            t[j] = t[j + 1];
                        }
                        n--;
                        cout << "Ticket Cancelled Successfully!\n";
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    cout << "Ticket Not Found.\n";
                break;
            }
            case 6:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while(choice != 6);
    return 0;
}