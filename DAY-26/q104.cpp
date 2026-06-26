//program to create a quiz application


#include <iostream>
using namespace std;
int main(){
    cout<<"Let's begin the quiz!!"<<endl;
    char answer;
    cout<<"Are you ready??\nEnter Y/N:";
    cin>>answer;
    int score=0;
    int ccount=0;
    int iccount=0;
    if(answer== 'Y'){
        cout<<"Yay! i liked that you agreed to participate"<<endl;
        int answer1;
        cout<<"Q1. How many colours are in the rainbow?";
        cin>>answer1;
        if(answer1== 7){
            cout<<"You are correct! ^_^)"<<endl;
            score+= 5;
            ccount++;
        }
        else{
            cout<<"You are not correct! :("<<endl;
            iccount++;
        }
        int answer2;
        cout<<"Q2. How many bones are in the human body?";
        cin>>answer2;
        if(answer2== 206){
            cout<<"You are correct! ^_^)"<<endl;
            score+= 5;
            ccount++;
        }
        else{
            cout<<"You are not correct! :("<<endl;
            iccount++;
        }
        int answer3;
        cout<<"Q3. How many oceans are in the world?";
        cin>>answer3;
        if(answer3== 5){
            cout<<"You are correct! ^_^)"<<endl;
            score+= 5;
            ccount++;
        }
        else{
            cout<<"You are not correct! :("<<endl;
            iccount++;
        }
        int answer4;
        cout<<"Q4. How many seconds are in the day?";
        cin>>answer4;
        if(answer4== 86400){
            cout<<"You are correct! ^_^)"<<endl;
            score+= 5;
            ccount++;
        }
        else{
            cout<<"You are not correct! :("<<endl;
            iccount++;
        }
        int answer5;
        cout<<"Q5. How many zodiac signs are there?";
        cin>>answer5;
        if(answer5== 12){
            cout<<"You are correct! ^_^)"<<endl;
            score+= 5;
            ccount++;
        }
        else{
            cout<<"You are not correct! :("<<endl;
            iccount++;
        }
        cout<<"Quiz is over!!"<<endl;
        cout<<"Your total score is "<<score<<endl;
        cout<<"Your correctly attempted: "<<ccount<<" questions"<<endl;
        cout<<"Your incorrectly attempted: "<<iccount<<" questions"<<endl;
    }
    else{
        cout<<"No issue\nI would've liked it if you had tried"<<endl;
    }
    return 0;
}