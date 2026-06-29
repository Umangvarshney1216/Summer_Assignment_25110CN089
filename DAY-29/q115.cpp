//program to create a menu driven string operations system


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    cout << "\n===== STRING OPERATIONS MENU =====";
    cout << "\n1. Display Strings";
    cout << "\n2. Find Length";
    cout << "\n3. Compare Strings";
    cout << "\n4. Reverse First String";
    cout << "\n5. Convert First String to Uppercase";
    cout << "\n6. Convert First String to Lowercase";
    cout << "\n7. Exit";
    string str1, str2, temp;
    cout << "\nEnter First String: ";
    getline(cin, str1);
    cout << "Enter Second String: ";
    getline(cin, str2);
    int choice;
    do
    {   
        cout << "\nEnter Your Choice:";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "First String : " << str1;
                cout << "\nSecond String: " << str2;
                break;
            case 2:
                cout << "Length of First String : " << str1.length();
                cout << "\nLength of Second String: " << str2.length();
                break;
            case 3:
                if(str1 == str2)
                    cout << "Strings are Equal.";
                else
                    cout << "Strings are Not Equal.";
                break;
            case 4:
                temp = str1;
                reverse(temp.begin(), temp.end());
                cout << "Reversed First String: " << temp;
                break;
            case 5:
                temp = str1;
                for(int i = 0; i < temp.length(); i++)
                    temp[i] = toupper(temp[i]);
                cout << "Uppercase String: " << temp;
                break;
            case 6:
                temp = str1;
                for(int i = 0; i < temp.length(); i++)
                    temp[i] = tolower(temp[i]);
                cout << "Lowercase String: " << temp;
                break;
            case 7:
                cout << "Exiting Program...";
                break;
            default:
                cout << "Invalid Choice!";
        }
    } while(choice != 7);
    return 0;
}