//program to create menu driven calculator


#include <iostream>
using namespace std;
int main(){
    cout<<"------CALCULATOR-------\n";
    cout<<"1. Addition\n";
    cout<<"2. Subtraction\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    int num1, num2;
    cout<<"enter both numbers:";
    cin>>num1>>num2;
    int choice;
    do
    {
        cout<<"enter choice(1-5):";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"sum of "<<num1<<" and "<<num2<<" is "<<(num1+num2)<<endl;
            break;
        
        case 2:
        if(num1>num2){
            cout<<"difference of "<<num1<<" and "<<num2<<" is "<<(num1-num2)<<endl;
            break;
        }
        else{
            cout<<"difference of "<<num2<<" and "<<num1<<" is "<<(num2-num1)<<endl;
            break;
        }
            
        case 3:
            cout<<"product of "<<num1<<" and "<<num2<<" is "<<(num1*num2)<<endl;
            break;

        case 4:
            if(num1>num2){
                cout<<"quotient of "<<num1<<" and "<<num2<<" is "<<(num1/num2)<<endl;
                break;
            }
            else{
                cout<<"quotient of "<<num2<<" and "<<num1<<" is "<<(num2/num1)<<endl;
                break;
            }

        case 5:
            cout<<"you came out of loop";
            break;
            
        default:
            cout<<"invalid choice made";
            break;
        }
    } while (choice != 5);
    return 0;
}