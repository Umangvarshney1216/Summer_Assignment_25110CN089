//program to create voting eligibilty system


#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    char nationality;
    cout<<"Are you a citizen of India?\nEnter Y/N:";
    cin>>nationality;
    if(age >= 18 && nationality == 'Y'){
        cout<<"You can vote"<<endl;
    }
    else{
        cout<<"You can not vote"<<endl;
    }
    return 0;
}