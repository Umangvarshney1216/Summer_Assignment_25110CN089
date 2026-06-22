//program to check a palindrome string


#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int n = str.length();
    bool palindrome = true;
    for(int i = 0; i < n / 2; i++){
        if(str[i] != str[n - i - 1]){
            palindrome = false;
            break;
        }
    }
    if(palindrome){
        cout << "Palindrome String";
    }
    else{
        cout << "Not a Palindrome String";
    }
    return 0;
}