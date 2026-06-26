//program to create a number guessing game


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int secretnumber= rand()%100+1;
    int guessnumber;
    do
    {
        cout<<"enter your guess between 1 to 100:";
        cin>>guessnumber;
        if(guessnumber== secretnumber){
            cout<<"you guessed it correct\n";
        }
        else if (guessnumber< secretnumber){
            cout<<"enter a greater value\n";
        }
        else{
            cout<<"enter a smaller value\n";
        }
    } 
    while (guessnumber!= secretnumber);
    return 0;
}